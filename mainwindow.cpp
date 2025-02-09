#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QFileDialog>
#include <QString>
#include <QMediaPlayer>
#include <QAudioOutput>
#include <QDebug>
#include <QListWidget>
#include <musicplaylist.h>
#include <QButtonGroup>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    //初始化乐手
    player = new QMediaPlayer(this);
    audioOutput = new QAudioOutput(this);
    player->setAudioOutput(audioOutput);
    audioOutput->setVolume(50);

    //初始化播放列表
    playlistManager = new MusicPlaylist(player,this);

    //音量调节
    connect(ui->volume,&QSlider::valueChanged,this,&MainWindow::setVolume);

    //进度条随音乐播放变化
    connect(player,&QMediaPlayer::positionChanged,this,&MainWindow::updatePosition);

    //设置进度条区间值
    connect(player,&QMediaPlayer::durationChanged,this,&MainWindow::updateDuration);

    //调节音乐播放进度
    connect(ui->process,&QSlider::sliderPressed,[=](){
        disconnect(player,&QMediaPlayer::positionChanged,this,&MainWindow::updatePosition);
    });
    connect(ui->process,&QSlider::sliderReleased,[=](){
        connect(player,&QMediaPlayer::positionChanged,this,&MainWindow::updatePosition);
        player->setPosition(ui->process->sliderPosition()*1000);
    });

    //设置播放模式

    ui->sequence->setChecked(true);

    connect(ui->sequence,&QRadioButton::clicked,[=](){
        playlistManager->setPlayMode(MusicPlaylist::PlayMode::Sequential);
        qDebug()<<"current playmode:"<<playlistManager->currentPlaymode();
    });

    connect(ui->random,&QRadioButton::clicked,[=](){
        playlistManager->setPlayMode(MusicPlaylist::PlayMode::Random);
        qDebug()<<"current playmode:"<<playlistManager->currentPlaymode();
    });

    connect(ui->loop,&QRadioButton::clicked,[=](){
        playlistManager->setPlayMode(MusicPlaylist::PlayMode::Loop);
        qDebug()<<"current playmode:"<<playlistManager->currentPlaymode();
    });

    //下一首

}

MainWindow::~MainWindow()
{
    delete ui;
    // delete songlist;
}

void MainWindow::on_play_clicked()
{
    player->play();
}


void MainWindow::on_stop_clicked()
{
    player->pause();
}


void MainWindow::on_select_clicked()
{
    //获取歌曲完整路径
    QString song_path = QFileDialog::getOpenFileName(this,tr("select song"),"d:/qtproject/MusicPlayer/music/");

    //添加到播放列表
    playlistManager->addMedia(song_path,ui->songList);

    //播放当前选中歌曲
    player->setSource(QUrl::fromLocalFile(song_path));
    ui->volume->setValue(50);
    player->play();

}

void MainWindow::setVolume(int Volume){
    //调整音量刻度为线性刻度
    qreal linearVolume = QtAudio::convertVolume(Volume / qreal(100.0),QtAudio::LinearVolumeScale,QtAudio::LinearVolumeScale);
    audioOutput->setVolume(linearVolume);
    // qDebug()<<"Volume="<<Volume<<","<<"linearVolume="<<linearVolume<<",realVolume="<<audioOutput->volume();
}


void MainWindow::updatePosition(qint64 position){
    ui->process->setValue(position/1000);
    // qDebug()<<"position="<<position/1000;
}

void MainWindow::updateDuration(qint64 duration){
    ui->process->setMaximum(duration/1000);
    // qDebug()<<"duration="<<player->duration();
}


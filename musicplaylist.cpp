#include "musicplaylist.h"
#include <QRandomGenerator>
#include <QFileDialog>

MusicPlaylist::MusicPlaylist(QMediaPlayer *player,QObject *parent,QListWidget *listWidget)
    : QObject{parent},m_player{player},m_listWidget{listWidget}
{
    connect(m_player,&QMediaPlayer::mediaStatusChanged,this,[=](QMediaPlayer::MediaStatus status){
        if(status==QMediaPlayer::EndOfMedia){
            qDebug()<<"准备播放下一首";
            playNext();
            qDebug()<<"currentIndex"<<this->currentIndex();
        }
    });
}

void MusicPlaylist::addMedia(QString song_path,QListWidget *listWidget){

    //如果歌单存在，不添加
    if(m_playlist.contains(song_path)){
        qDebug()<<"已经存在"<<song_path;
        return;
    }

    //添加到歌单
    m_playlist.append(song_path);
    if(!song_path.isEmpty())
    {
        //提取纯文件名
        QFileInfo song_info(song_path);
        QString songname = song_info.baseName();

        //添加到显示界面
        QListWidgetItem *item =  new QListWidgetItem(songname,listWidget);
        this->setCurrentIndex(this->currentListSize()-1);
        qDebug()<<"songList size="<<this->currentListSize()<<"currentIndex:"<<this->currentIndex();
        listWidget->setCurrentItem(item);
    }
    qDebug()<<"已添加歌曲"<<song_path;
    // emit playlistUpdate();
}

void MusicPlaylist::removeMedia(int index){
    if(index>=0&&index<m_playlist.size()){
        m_playlist.removeAt(index);
        if(index==m_currentIndex)
            m_currentIndex=-1;
    }
    // emit playlistUpdate();
}

void MusicPlaylist::playNext(){
    if(m_playlist.isEmpty()) return;
    switch(m_playmode){
    case Sequential:
        m_currentIndex = (m_currentIndex+1)%m_playlist.size();
        break;
    case Loop:
        break;
    case Random:
        m_currentIndex = QRandomGenerator::global()->bounded(m_playlist.size());
        break;
    }

    m_player->setSource(QUrl::fromLocalFile(m_playlist.at(m_currentIndex)));
    m_player->play();
}

void MusicPlaylist::playPrevious(){
    if(m_playlist.isEmpty()) return;
    switch(m_playmode){
    case Sequential:
        m_currentIndex = (m_currentIndex-1+m_playlist.size())%m_playlist.size();
        break;
    case Loop:
        break;
    case Random:
        m_currentIndex = QRandomGenerator::global()->bounded(m_playlist.size());
        break;
    }

    m_player->setSource(QUrl::fromLocalFile(m_playlist.at(m_currentIndex)));
    m_player->play();
}

void MusicPlaylist::setCurrentIndex(int index){
    m_currentIndex = index;
}

void MusicPlaylist::setPlayMode(PlayMode playmode){
    m_playmode = playmode;
}

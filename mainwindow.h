#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMediaPlayer>
QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_play_clicked();             //开始播放当前音乐
    void on_stop_clicked();             //暂停播放当前音乐
    void on_select_clicked();           //选择本地音乐
    void updatePosition(qint64);        //随音乐播放实时更新进度条值
    void updateDuration(qint64);        //设置进度条区间值
    void setVolume(int);                //设置音量

private:
    QMediaPlayer *player;
    QAudioOutput *audioOutput;
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H

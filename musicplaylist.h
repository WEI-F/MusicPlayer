#ifndef MUSICPLAYLIST_H
#define MUSICPLAYLIST_H

#include <QObject>
#include <QMediaPlayer>
#include <QUrl>
#include <QListWidget>
class MusicPlaylist : public QObject
{
    Q_OBJECT

public:
    explicit MusicPlaylist(QMediaPlayer *player,QObject *parent = nullptr,QListWidget *listWidget = nullptr);

    //播放模式枚举类型
    enum PlayMode{
        Sequential,
        Loop,
        Random
    };

    void addMedia(QString url,QListWidget *listwidget = nullptr);         //播放列表中添加音乐
    void removeMedia(int index);            //播放列表中删除音乐
    void playNext();                        //播放下一首歌
    void playPrevious();                    //播放上一首歌
    void setCurrentIndex(int index);        //设置当前播放歌曲的索引
    void setPlayMode(PlayMode playmode);    //设置当前播放模式

    QStringList currentfiles() const {return m_playlist;};  //返回当前播放列表
    int currentIndex() const {return m_currentIndex;};      //返回当前播放索引
    PlayMode currentPlaymode() const {return m_playmode;};  //返回当前播放模式
    int currentListSize() const {return m_playlist.size();};//返回当前播放列表大小

// signals:
//     void playlistUpdate();

private:
    PlayMode m_playmode = Sequential;
    QMediaPlayer *m_player;
    QStringList m_playlist;
    QListWidget m_listWidget;
    int m_currentIndex = -1;
};

#endif // MUSICPLAYLIST_H

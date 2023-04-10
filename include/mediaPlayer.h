#ifndef MEDIA_PLAYER_H
#define MEDIA_PLAYER_H

#include<vector>
#include<mediaFile.h>

class MediaPlayer{
    private:
    std::vector<MediaFile*> playList;
    MediaFile *mediafile;
    int playlistPtr;
    
    public:
    MediaPlayer();
    void addMediaFile(MediaFile *mediafile);
    void removeMediaFile(std::string title);
    void play();
    void stop();
    void seek(double len);
};

#endif
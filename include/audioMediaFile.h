#ifndef AUDIO_MEDIAFILE_H
#define AUDIO_MEDIAFILE_H

#include"mediaFile.h"
#include<vector>

enum GenreType{
    UNKNOWN_GENRE, POP, HIPHOP, JAZZ, FOLK, ROCK
};


class AudioMediaFile: public MediaFile {
    private:
    MediaFileType type;
    GenreType genre;
    std::vector<std::string> artists;
    
    public:
    AudioMediaFile(std::string title,MediaFileType type,GenreType genre,std::vector<std::string> artists,double length);
    MediaFileType getType();
    GenreType getGenre();
    std::vector<std::string> getArtist();
    void display();

    //void execute(MediaOperation operation);
};

#endif
#ifndef VIDEO_MEDIAFILE_H
#define VIDEO_MEDIAFILE_H

#include"mediaFile.h"
#include<vector>

enum MovieType{
    UNKNOWN_MOVIE, THRILLER, ROMANTIC, SI_FY,DRAMA
};

class VideoMediaFile: public MediaFile {
    private:
    MediaFileType type;
    MovieType movieType;
    std::vector<std::string> cast;

    public:

    VideoMediaFile(std::string title,MediaFileType type,MovieType movieType,std::vector<std::string> cast,double lenght);
    MediaFileType getType();
    MovieType getMovieType();
    std::vector<std::string> getCast();
    void display();

    //void execute(MediaOperation operation);
};

#endif
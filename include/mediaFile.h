#ifndef MEDIAFILE_H
#define MEDIAFILE_H

#include<string>

enum MediaFileType{
    MEDIA_FILE_UNKNOWN, MEDIA_FILE_AUDIO, MEDIA_FILE_VIDEO
};

/*
enum OperationType {
    OPERATION_PLAY, OPERATION_STOP, OPERATION_SEEK
};

class MediaOperation{
    private:
    OperationType type;
    double len;
    public:
    MediaOperation(OperationType type){this->type = type;};
    MediaOperation(OperationType type, double len){this->type = type; this->len = len;};

    inline double getLen(){ return len; }
    inline OperationType getOperationType(){ return type; }
};
*/

extern std::string getTypeString(const MediaFileType &type);

class MediaFile{
    protected:
    std::string title; 
    double length;
    double head;
    
    public:
    MediaFile(std::string &title,double length);
    virtual std::string getTitle();
    virtual void display();
    //virtual void execute(MediaOperation operation )= 0;

    //protected:
    void play();
    void stop();
    void seek(double len);
    
};

#endif
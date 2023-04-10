#include"mediaFile.h"
#include<iostream>

MediaFile::MediaFile(std::string& title,double length){
    this->title = title;
    this->length = length;
    this->head = 0L;
}

void MediaFile::play(){
    std::cout<<"Playing "<<title<<std::endl;
}

void MediaFile::stop(){
    this->head = this->length;
    std::cout<<"Stoped playing "<<title<<std::endl;
}

void MediaFile::seek(double len){
    
    this->head = std::min(head + len, length);
    std::cout<<"Seeking "<<title<<std::endl;
}


std::string MediaFile::getTitle(){
    return title;
}

void MediaFile::display(){
    std::cout<<"Title : "<<title<<std::endl;
    std::cout<<"Length : "<<this->length<<std::endl;
}

std::string getTypeString(const MediaFileType &type) {
    std::string mediaType;
    switch(type){
        case MEDIA_FILE_AUDIO:
        mediaType = "AUDIO";
        break;
        case MEDIA_FILE_VIDEO:
        mediaType = "VIDEO";
        break;
        default:
        mediaType = "UNKNOWN";
    }
    return mediaType;
}

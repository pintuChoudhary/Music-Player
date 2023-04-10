#include"audioMediaFile.h"
#include<iostream>

AudioMediaFile::AudioMediaFile(std::string title,MediaFileType type,GenreType genre,std::vector<std::string> artists, double length): MediaFile(title,length){
    this->type = type;
    this->genre = genre;
    this->artists.insert(this->artists.end(),artists.begin(),artists.end());
}

MediaFileType AudioMediaFile::getType(){
    return this->type;
}

GenreType AudioMediaFile::getGenre(){
    return this->genre;
}

std::vector<std::string> AudioMediaFile::getArtist(){
    return this->artists;
}

void AudioMediaFile::display(){
    MediaFile::display();
    std::cout<<"Type :"<<getTypeString(type)<<std::endl;
    std::cout<<"Genre :"<<genre<<std::endl;
    std::cout<<"Artist :";
    for(std::string artist: this->artists){
        std::cout<<artist<<" ";
    }
    std::cout<<std::endl;
}

/*
void AudioMediaFile::execute(MediaOperation operation){
    switch (operation.getOperationType()){
    case OperationType::OPERATION_PLAY :
        MediaFile::play();
        break;
    
    case OperationType::OPERATION_STOP :
        MediaFile::stop();
        break;
    
    case OperationType::OPERATION_SEEK :
        MediaFile::seek(operation.getLen());
        break;

    default:
        std::cout<<"Unknown operation"<<std::endl;
        break;
    }
}
*/

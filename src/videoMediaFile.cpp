#include"videoMediaFile.h"
#include<iostream>

VideoMediaFile::VideoMediaFile(std::string title,MediaFileType type,MovieType movieType,std::vector<std::string> cast,double lenght):MediaFile(title,lenght){
    this->type = type;
    this->movieType = movieType;
    this->cast.insert(this->cast.end(),cast.begin(),cast.end());
}
MediaFileType VideoMediaFile::getType(){
    return this->type;
}

MovieType VideoMediaFile::getMovieType(){
    return this->movieType;
}

std::vector<std::string> VideoMediaFile::getCast(){
    return this->cast;
}

void VideoMediaFile::display(){
    MediaFile::display();
    std::cout<<"Type :"<<getTypeString(type)<<std::endl;
    std::cout<<"MovieType :"<<movieType<<std::endl;
    std::cout<<"Cast :";
    for(std::string cst: cast){
        std::cout<<cst<<" ";
    }
    std::cout<<std::endl;
}

/*
void VideoMediaFile::execute(MediaOperation operation){
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
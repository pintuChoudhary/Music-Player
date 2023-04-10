#include"mediaPlayer.h"
#include"audioMediaFile.h"
#include"mediaFileNotFoundException.h"

MediaPlayer::MediaPlayer(){}

void MediaPlayer::addMediaFile(MediaFile *mediafile){
    this->playList.push_back(mediafile);
}

void MediaPlayer::removeMediaFile(std::string title){
    for(auto it = this->playList.begin(); it != this->playList.end(); it++){
        if((*it)->getTitle() == title){
            this->playList.erase(it);
        }
    }
}

void MediaPlayer::play(){
    if(!mediafile){
        if((int)playList.size() <= playlistPtr){
            throw MediaFileNotFoundException("No Media file present");
        }

        mediafile = playList[playlistPtr++];
    }
    
    //mediafile->execute({OperationType::OPERATION_PLAY});
    mediafile->play();
}

void MediaPlayer::stop(){
    if(!mediafile){
        throw MediaFileNotFoundException("No Media file present");
    }
    //mediafile->execute({OperationType::OPERATION_STOP});
    mediafile->stop();
    if((int)playList.size() > playlistPtr){
        mediafile = playList[playlistPtr++];
    }
}

void MediaPlayer::seek(double len){
    if(!mediafile){
        throw MediaFileNotFoundException("No Media file present");
    }
    //mediafile->execute({OperationType::OPERATION_SEEK, len});
    mediafile->seek(len);
}
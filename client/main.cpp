#include"mediaPlayer.h"
#include"audioMediaFile.h"
#include"videoMediaFile.h"
#include<iostream>

int main(){
    std::vector<std::string> artist = {"artist 1","artist 2"};
    AudioMediaFile au1("song 1",MediaFileType::MEDIA_FILE_AUDIO,GenreType::FOLK,{"artist 1","artist 2"},4.5); 
    AudioMediaFile au2("song 2",MediaFileType::MEDIA_FILE_AUDIO,GenreType::JAZZ,{"artist 2"},6.1);
    AudioMediaFile au3("song 3",MediaFileType::MEDIA_FILE_AUDIO,GenreType::HIPHOP,{"artist 1","artist 3"},5.5);   
    MediaPlayer mp;
    
    mp.addMediaFile(&au1);
    mp.play();
    mp.seek(3.0);
    mp.stop();
    
    au1.display();
    return 0;
}
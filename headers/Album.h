//  LM2
//  Header file for Album class
//  Rab Greenup

#ifndef ALBUM_H
#define ALBUM_H

#include <vector>
#include <string>
#include <ostream>  // Used to overload <<
#include "Song.h"


class Album {
    private:
        std::string name;
        std::string artist;
        std::string genre;
        std::string publisher;
        int release_year;

        std::vector<Song> songs;

    public:
        // Constructor
        // Name, Artist, Genre, Publisher, and Release Year of album
        Album(std::string n = NULL, std::string a = NULL, std::string g = NULL, std::string p = NULL, int r = -1);

        // Getters
        std::string get_name();
        std::string get_artist();
        std::string get_genre();
        std::string get_publisher();
        int get_release_year();
        int get_num_songs();
        // gets the song at index n
        Song get_song(int n);

        // Returns total duration of album in minutes
        double duration();

        // do later
        //std::ostream& operator<< (Song& s);

        // Formats the data pretty and returns a string
        std::string toString();

        // Adds a song to end of the album
        void addSong(Song song);



};


#endif
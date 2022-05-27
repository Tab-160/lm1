//  LM2
//  Header file for Song class
//  Rab Greenup

#ifndef SONG_H
#define SONG_H

#include <string>

class Song {
    private:
        std::string name;
        double duration;    // in minutes

    public:
        // Constructors
		Song();
        // Name and duration
        Song(std::string n, double d);

        // Getters
        std::string get_name();
        // In minutes
        double get_duration();

};

#endif
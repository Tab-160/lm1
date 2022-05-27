//  LM2
//  Function definitions for Album class
//  Rab Greenup

#include <vector>
#include <string>
#include <ostream>  // Used to overload <<
#include "Song.h"
#include "Album.h"

// Constructor
Album::Album(){
	name = "";
    artist = "";
    genre = "";
    publisher = "";
    release_year = -1;
}

// Name, Artist, Genre, Publisher, and Release Year of album
Album::Album(std::string n, std::string a, std::string g, std::string p, int r){
    name = n;
    artist = a;
    genre = g;
    publisher = p;
    release_year = r;
}

// Getters
std::string Album::get_name(){
    return name;
}
std::string Album::get_artist(){
    return artist;
}
std::string Album::get_genre(){
    return genre;
}
std::string Album::get_publisher(){
    return publisher;
}
int Album::get_release_year(){
    return release_year;
}
int Album::get_num_songs(){
    return songs.size();
}
// gets the song at index n
Song Album::get_song(int n){
    return songs[n];
}

// Returns total duration of album in minutes
double Album::duration(){
    // holds the accumulated duration
    double total = 0.0;
    for(Song i : songs){
        total += i.get_duration();
    }
    return total;
}

// do later
//std::ostream& operator<< (Song& s);

// Formats the data pretty and returns a string
std::string Album::toString(){
    // this is the string that will be returned
    std::string this_string = "";
    this_string += "The Album " + get_name() + " is written by " + get_artist();
    this_string += " and published by " + get_publisher() + " in " + std::to_string(get_release_year());
    this_string += ". It has " + std::to_string(get_num_songs()); 
    this_string += " songs for a total length of " + std::to_string(duration());
    this_string += " minutes. The genre is " + get_genre() + ".";
    return(this_string);
}

// Adds a song to end of the album
void Album::addSong(Song song){
    songs.push_back(song);
}
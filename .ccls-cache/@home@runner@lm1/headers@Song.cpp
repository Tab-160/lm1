//  LM2
//  Function definitions for Song class
//  Rab Greenup

#include <string>
#include "Song.h"

// Constructors
Song::Song(){
	name = "";
	duration = -1;
}

// Name and duration
Song::Song(std::string n, double d){
    name = n;
    duration = d;
}

// Getters
std::string Song::get_name(){
    return name;
}
// In minutes
double Song::get_duration(){
    return duration;
}

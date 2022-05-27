//  LM2
//  Testing/Proof of working
//  Rab Greenup

//#include <string>
#include <iostream>
#include "headers/Album.h"
#include "headers/Song.h"

int main(){
    // Songs in The Normal Album by Will Wood
    Song i_me_myself("I / Me / Myself", 4.85);
    Song alternative = Song("...well, better than the alternative", 4.23);
    Song apples = Song("Outliars and Hyppocrates: a fun fact about apples", 4.2);
    Song love_me = Song("Love, Me Normally", 5.75);
    Song mori = Song("Memento Mori: the most important thing in the world", 2.82);

    // Songs in Punch by Autoheart
    Song anniversary = Song("Anniversary", 3.72);
    Song factories = Song("Factories", 4.75);
    Song control = Song("Control", 4.32);
    Song agoraphobia = Song("Agoraphobia", 4.42);
    Song moscow = Song("Moscow", 3.9);

    // Create albums
    Album normal = Album("The Normal Album", "Will Wood", "Pop", "Spotify", 2020);
    Album punch = Album("Punch", "Autoheart", "Pop", "Spotify", 2013);

	normal.addSong(i_me_myself);
	normal.addSong(alternative);
	normal.addSong(apples);
	normal.addSong(love_me);
	normal.addSong(mori);

	punch.addSong(anniversary);
	punch.addSong(factories);
	punch.addSong(control);
	punch.addSong(agoraphobia);
	punch.addSong(moscow);

	std::string this_string = "";
    this_string += "The Album " + normal.get_name() + " is written by " + normal.get_artist();
    this_string += " and published by " + normal.get_publisher() + " in " + std::to_string(normal.get_release_year());
    this_string += ". It has " + std::to_string(normal.get_num_songs()); 
    this_string += " songs for a total length of " + std::to_string(normal.duration());
    this_string += " minutes. The genre is " + normal.get_genre() + ".";

	std::cout << this_string << std::endl;

	

    // the toString method includes all other methods, and so if toString works, everything works
    std::cout << normal.toString() << std::endl << punch.toString();
}
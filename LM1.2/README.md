# Learning Module 1.1
CS172-1 - Computer Science 2 

2/9/2021

Pete Tucker

---

## LM1.2 Class Construction

You will be graded on **proper coding style**. The aspect that you should care about most is **good comments and readable code**. Each program should have a proper comment header and each line of code should be explained in some way by a comment. Variable names should make sense, function names should be descriptive. Each `if`/`else`, `while`, `for` loop and function statement should be properly indented, at least one tab (or 4 spaces) after a `{`.

Additionally you will be graded on proper **code re-use and functionalization**. You should be using as few variables as possible, and you should never have to use your copy/paste commands. **Functionalization** is your friend! The more you can functionalize, the better! You main function should be less than 20 lines of code.

Functions should have **documentation**! Each function should have a set of documentation that outlines the purpose of the function, what the inputs are, their scope and what the return value is.

## LM1.2 Basic Class Implementation (50 pts)

Before I set you wild on making classes, we are going to go through and make a class that I will heavily define for you. I am going to outline some requirements for the class that you are going to write. You may need to add more methods, variables and/or functions: that is fine. Be sure to double check the requirements to make sure you did them correctly.

Overview: You are going to make a class that will aid in classifying **music albums**. This is certainly a class that has been written in some way for Spotify/iTunes/Pandora. Your class will hold all of the pertinent information for a **single album**.

Information Contained in your class: All of the member variables should be protected using a private tag. The album information should hold: **album name**, **artist**, **genre**, **release year** and **publisher**. The album will also hold a **track listing of each song title and duration**.

**Constructor**: The Album name, artist, release year and publisher should all be set when the Album class is made (hint: this means you will need at least one constructor that has all of these). These variables should not change as the class is modified.

Each of these public **methods** must be implemented:

1. A host of interfaces is needed to access all of the member variables: `name`, `artist`, `genre`, `release`, and `publisher`.
2. A way to add tracks to the album, one at a time.
3. A way to tell how many tracks are part of the album.
4. A way to pull specific track information by track number (both track name and duration). This can be done in one method, or two.
5. A way to report the total duration of the album.
6. A way to print all of the album information (including track information and totals) to the terminal (this should be the only method with a COUT or CIN). This should be informative and well formatted.

**Application**: Your main function should utilize at least two instances of an album, fill each of them with tracks (at least 5 each) then display the use of each of the methods implemented. Show that your class is working and correct. 

**+10 pts Extra Credit**: Make a class that represents a track, then replace the track listing member variables in your album class with an array of class `track`. This `track` should hold track `name` and `duration` at a minimum.

//
// Created by Ethan Baruh on 3/21/22.
//

#include <iostream>
#include <fstream>
#include <sstream>
using namespace std;

int main(int argc, char *argv[]) {
    /* Arg Handling */
    // Check we have 3 args if not print usage message
    if (argc != 3) {
        cout << "usage: ./solver [board_path] [solution_path]" << endl;
    }



    string boardPath = argv[1];
    string solPath = argv[2];

    // TODO check formatting of board
    ifstream my_file(boardPath);      // open the file
    string line;                     // helper var to store current line
    while(getline(my_file, line)) {  // read one line from the file
        istringstream ss(line);      // create istringstream of current line
        string first, second, third, fourth; // helper vars
        getline(ss, first, ',');     // store first column in "first"
        getline(ss, second, ',');    // store second column in "second"
        getline(ss, third, ',');    // store third column column in "third"
        getline(ss, fourth, '\n');

        // TODO add to hash map
    }
    my_file.close();                 // close file when done


}
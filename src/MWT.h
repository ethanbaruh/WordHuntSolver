//
// Created by Ethan Baruh on 3/21/22.
//

#ifndef WORDHUNTSOLVER_MWT_H
#define WORDHUNTSOLVER_MWT_H

#include <string>
#include "MWTNode.h"
using namespace std;

class MWT {
public:
    /* Instance Variables */
    MWTNode* root;

    /**
     * Constructor for MultiWay Trie
     */
    MWT();

    /**
     * Destructor for MultiWay Trie
     */
    ~MWT();

    /**
     * Checks if a given string is in the MWT
     * @param s The string to check if it is in the trie
     * @return True if s is in the Trie
     */
    bool find(string s);

    /**
     * Removes a given string from the trie
     * @param s The string to remove from the trie
     */
    void remove(string s);

    /**
     * Adds a string to the trie
     * @param s The string to add to the trie
     */
    void insert(string s);
};

#endif //WORDHUNTSOLVER_MWT_H

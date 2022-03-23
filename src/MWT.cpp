//
// Created by Ethan Baruh on 3/21/22.
//

#include "MWT.h"

MWT::MWT() {
    root = new MWTNode();
}

/**
 * Helper function to recursively free memory
 */
void destructorHelper(MWTNode* curr) {
    for (MWTNode* child : curr->edges) {
        destructorHelper(child);
    }

    delete child;
    child = nullptr;
}

MWT::~MWT() {
    destructorHelper(root);
}

/**
 * Checks if a given string is in the MWT
 * @param s The string to check if it is in the trie
 * @return True if s is in the Trie
 */
bool MWT::find(string s) {
    MWTNode* curr = root;
    for (char c : s) {
        if (curr->hasEdge(c) != true) { return false; }

        curr = curr->getEdge(c);
    }

    if (curr->isWord == true) { return true; }
    else { return false; }
}

/**
 * Removes a given string from the trie
 * @param s The string to remove from the trie
 */
void MWT::remove(string s) {
    MWTNode* curr = root;
    for (char c : s) {
        if (curr->hasEdge(c) == false) { return; }

        curr = curr->getEdge(c);
    }

    if (curr->isWord == true) {
        curr->isWord = false;
    }
}

/**
 * Adds a string to the trie
 * @param s The string to add to the trie
 */
void MWT::insert(string s) {
    MWTNode* curr = root;

    for (char c : s) {
        if (!curr->hasEdge(c)) {
            curr->addEdge(c);
        }
        curr = curr->getEdge(c);
    }

    if (curr->isWord == false) {
        curr->isWord = true;
    }
}

//
// Created by Ethan Baruh on 3/21/22.
//

#include "MWTNode.h"

MWTNode::MWTNode() {
    isWord = false;
    edges.resize(26);
}

/**
 * Gets the index of a given char to use to find in the edges. All letters should be uppercase
 * @param c Char to find index of
 * @return index of c in edges
 */
int MWTNode::index(char c) {
    // Sanity checking that char is in the correct range
    int cRep = (int) c;
    if ((cRep < 65) || (cRep > 122) || ((cRep > 91) && (cRep < 97))) {
        // c is not a valid letter
        return -1;
    }

    // Check if c is lower case
    if (cRep >= 97) {
        // Convert to uppercase
        c -= (int) 'a' - (int) 'A';
    }

    return ((int) c - (int) 'A');
}

/**
 * Adds an edge to c
 * @param c The char to add an edge to
 */
void MWTNode::addEdge(char c) {
    int idx = index(c);

    // Sanity check
    if (idx == -1) { return; }

    MWTNode* newEdge = new MWTNode();
    edges.at(idx) = newEdge;
}

/**
 * Checks if the MWTNode has an edge to c
 * @param n The node to check
 * @param c The char to check
 * @return True if n has an edge to c
 */
bool MWTNode::hasEdge(char c) {
    // Sanity checks
    int idx = index(c);
    if (idx == -1) { return false; }

    if (edges.at(idx) == nullptr) { return false; }
    else { return true; }
}

/**
 * Retrieves the node pointed to by c from n
 * @param n The node to retrieve the next node from
 * @param c The edge to retrieve the next node from
 * @return The node by c from n
 */
MWTNode* MWTNode::getEdge(char c) {
    // Sanity checks
    int idx = index(c);
    if (idx == -1) { return nullptr; }

    return edges.at(idx);
}

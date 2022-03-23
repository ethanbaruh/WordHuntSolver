//
// Created by Ethan Baruh on 3/21/22.
//

#ifndef WORDHUNTSOLVER_MWTNODE_H
#define WORDHUNTSOLVER_MWTNODE_H
using namespace std;

#include <vector>

class MWTNode {
public:
    /* Instance variables */
    // Vector of outgoing edges from curr, null if there is no edge to the given letter
    vector<MWTNode*> edges;

    // True if curr is a word node
    bool isWord;

    /**
     * Constructor
     */
    MWTNode();

    /**
     * Gets the index of a given char to use to find in the edges. All letters should be uppercase
     * @param c Char to find index of
     * @return index of c in edges
     */
    int index(char c);

    /**
     * Adds an edge to c
     * @param c The char to add an edge to
     */
    void addEdge(char c);

    /**
     * Checks if the MWTNode has an edge to c
     * @param c The char to check
     * @return True if n has an edge to c
     */
    bool hasEdge(char c);

    /**
     * Retrieves the node pointed to by c from n
     * @param c The edge to retrieve the next node from
     * @return The node by c from n
     */
    MWTNode* getEdge(char c);

};

#endif //WORDHUNTSOLVER_MWTNODE_H

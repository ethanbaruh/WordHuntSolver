//
// Created by Ethan Baruh on 3/17/22.
//

#ifndef WORDHUNTSOLVER_NODE_H
#define WORDHUNTSOLVER_NODE_H

#include <tuple>

class Node {
    public:
        // Instance variables
        Node* up;
        Node* right;
        Node* left;
        Node* down;

        bool visited;
        std::tuple<char, int, int> label;

        /**
         * Constructor for a new Node
         * @param l Tuple of form <Letter, row, col> to distinguish Node
         */
        Node(std::tuple<char, int, int> l) : label(l) {}
};

#endif //WORDHUNTSOLVER_NODE_H

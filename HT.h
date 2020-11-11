//
// Created by Chibiken on 2020/11/10.
//

#ifndef HUFFMANTREE_CLION_HT_H
#define HUFFMANTREE_CLION_HT_H

#include "HTNode.h"
#include "charArray.h"
#include <list>

class HT {
private:
    list<HTNode> nodes;
    HTNode* root;
    charArray* ca;
    int count;

public:
    HT() {
        root = new HTNode();
        ca = new charArray();
        count = 0;
    }

    void buildHT(string mes) {
        ca->loadMes(mes);

        while (!ca->isEmpty()) {
            // find 2 min char location
            int min1Location = ca->findMin();
            int min2Location = ca->findMin();

            // put them into a tree
            root->setLeft(new HTNode(min1Location));
            root->setRight(new HTNode(min2Location));

            count += ca->array[min1Location];
            count += ca->array[min2Location];

            // The last element to store current tree count
            ca->array[26] = count;
        }
    }
};


#endif //HUFFMANTREE_CLION_HT_H

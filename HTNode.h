//
// Created by Chibiken on 2020/11/10.
//

#ifndef HUFFMANTREE_CLION_HTNODE_H
#define HUFFMANTREE_CLION_HTNODE_H



#include<iostream>

class HTNode {
private:
    int element;
    HTNode* lc;
    HTNode* rc;

public:
    HTNode(char e = NULL) {
        this->element = e;
        lc = rc = NULL;
    }
    ~HTNode() {}

    char getElement() { return this->element; }
    char setElement(const char e) { this->element = e; }

    inline HTNode* left() const { return lc; }
    void setLeft(HTNode* node) { lc = node; }
    inline HTNode* right() const { return rc; }
    void setRight(HTNode* node) { rc = node; }

    bool isLeaf() {
        if(!rc && !lc)
            return true;
        return false;
    }
};


#endif //HUFFMANTREE_CLION_HTNODE_H

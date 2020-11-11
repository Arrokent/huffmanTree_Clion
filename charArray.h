//
// Created by Chibiken on 2020/11/10.
//

#ifndef HUFFMANTREE_CLION_CHARARRAY_H
#define HUFFMANTREE_CLION_CHARARRAY_H

#include <string>
#include <iostream>

#define SIZE 26

using namespace std;

class charArray {
public:
    int array[SIZE];

    charArray() {
        for (int i = 0; i < SIZE; i++)
            array[i] = 0;
    }

    charArray(string mes) {
        for (int i = 0; i < SIZE; i++)
            array[i] = 0;
        for(int i = 0; i < mes.size(); i++)
            array[mes[i]-'a']++;
    }

    ~charArray(){};

    void loadMes(string mes){
        for(int i = 0; i < mes.size(); i++)
            array[mes[i]-'a']++;
    }

    bool isEmpty() {
        for (int i = 0; i < SIZE; i++)
            if (array[i] != 0)
                return false;

        return true;
    }

    void show() {
        for (int i = 0; i < SIZE; i++)
            cout << char('a' + i) << ':' << array[i] << endl;
    }

    int findMin() {
        int Min = 100000;
        int location = -1;

        for (int i = 0; i < SIZE; i++) {
            if (array[i] == 0)
                continue;
            else if(array[i] < Min) {
                Min = array[i];
                location = i;
            }
        }

        array[location] = 0;

        return location;
    }

};


#endif //HUFFMANTREE_CLION_CHARARRAY_H

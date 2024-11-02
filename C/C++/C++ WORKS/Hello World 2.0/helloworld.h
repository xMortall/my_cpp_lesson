#ifndef HELLOWORLD_H
#define HELLOWORLD_H

#include <iostream>
#include <string>

using namespace std;

class helloWorld {
public:
    struct Hello {
        char h = 'H';
        char e = 'e';
        char l = 'l';
        char o = 'o';
        char w = 'W';
        char r = 'r';
        char d = 'd';
    };

    Hello getLetters();
};

#endif

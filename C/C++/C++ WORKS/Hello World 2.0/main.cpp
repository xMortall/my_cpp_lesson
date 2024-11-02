#include "helloworld.h"


int main() {
    helloWorld hw;
    helloWorld::Hello letters = hw.getLetters();

    cout << letters.h;
    cout << letters.e;
    cout << letters.l;
    cout << letters.l;
    cout << letters.o;
    cout << " ";
    cout << letters.w;
    cout << letters.o;
    cout << letters.r;
    cout << letters.l;
    cout << letters.d;
    cout << endl;

    return 0;
}

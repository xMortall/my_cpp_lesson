#include <iostream>

float x,y,z,total;

float xpto(float x, float y = 7.5, float z){
    total = x * y * z;
    return total;
}

int main(){

    x = 1.1;
    y = 2.2;
    z = 3.3;

    xpto(x=10,z=10);

return 0;
}
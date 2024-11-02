#include <iostream>
using namespace std;

int numeros[10];

double theDouble(double x){
    
    return x*2;
}

int main(){
    
    int dobro = theDouble(5);
    cout << dobro << endl;

    
    for (int n = 0; n < 10; n++) {
        numeros[n] = n*2; 
        if(numeros[n] % 2 == 0){
            cout << numeros[n] << "par" << endl;
        }else{
            cout << numeros[n] << "impar" << endl;
        }
    }

    return 0;
}


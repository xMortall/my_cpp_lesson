#include <iostream>
#include <string>

using namespace std;

class Fatura {
    private:
        string numero;
        string nome;
        int contribuinto;
        float valor;

    public:
        void criarFatura(string numero, string nome, int contribuinto, float valor) {
            this -> numero = numero;
            this -> nome = nome;
            this -> contribuinto = contribuinto;
            this -> valor = valor;
        }
        void imprimirFatura(Fatura fatura) {
            cout << numero << endl;
            cout << nome << endl;
            cout << contribuinto << endl;
            cout << valor << endl;
    }
    void criarFatura(Fatura fatura, string numero, string nome, int contribuinto, float valor) {
        fatura.criarFatura(numero, nome, contribuinto, valor);
    }
};
int main() {

    system("clear");system("cls");
    

    Fatura fatura1;
    fatura1.criarFatura("123", "GG", 123456789, 100.00);
    fatura1.imprimirFatura(fatura1);
    
    
    return 0;
}
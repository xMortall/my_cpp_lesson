#include <iostream>
using namespace std;

//Struct de uma lata de refrigerante

struct lata{
    string marca;
    string sabor;
    string validade;
    string fornecedor;
    string codBarras;
    string lote;
    string dataFabrico;
    string infofornecedor;
    string infoNutricional[5];
    string materialEmbalagem;

    double capacidade;
    double  preco;
    double peso;

    bool status;
};

class Refrigerante{

    private:
    lata refrigerante;
    double qntSumoDisponivel;

    public:
    //constructor
    Refrigerante (lata lata){
        refrigerante = lata;
        qntSumoDisponivel = lata.capacidade;
    }

    //Abrir a lata
    void abrirLata(){
        if(refrigerante.status == false){
            cout << "Lata fechada" << endl;
            refrigerante.status = true;
        }else{
            cout << "Lata aberta" << endl;
    }   };

    //Beber refrigerante
    void beberRefrigerante(double qnt){
        if(refrigerante.status == true){
            cout << "Há " << qntSumoDisponivel << " de " << refrigerante.marca << " disponíveis" << endl;
            if(qnt <= qntSumoDisponivel){
                qntSumoDisponivel -= qnt;
                cout << "Está a beber " << qnt << " de " << refrigerante.marca << endl;
            }else{
                cout << "Não há sumo suficiente" << endl;
            }
        }else{
            cout << "Lata fechada" << endl;
        }
    };
};
int main(){

    lata lata1 = {"Coca-Cola", "Cola", "12/12/2022",
                  "Coca-Cola Company", "123456789",
                  "123456", "12/12/2021", 
                  "Coca-Cola Company", 
                  {"Calorias: 140", "Gorduras: 0g",
                   "Sódio: 45mg", "Carboidratos: 39g",
                   "Açúcares: 39g"}, "Alumínio",
                    350, 1.50, 0.35, true};
    Refrigerante refri1(lata1);

    while (true){
        int opcao;
        cout << "1 - Abrir lata" << endl;
        cout << "2 - Beber refrigerante" << endl;
        cout << "3 - Sair" << endl;
        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao){
            case 1:
                refri1.abrirLata();
                break;
            case 2:
                double qnt;
                cout << "Quantos litros quer beber? ";
                cin >> qnt;
                refri1.beberRefrigerante(qnt);
                break;
            case 3:
                return 0;
            default:
                cout << "Opção inválida" << endl;
        }
    }
};
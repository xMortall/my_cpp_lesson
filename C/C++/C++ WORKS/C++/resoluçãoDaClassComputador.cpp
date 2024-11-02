#include "bibliotecas.h"

struct hardware
{
    string ram;
    string gpu;
    string cpu;
    string psu;
    string caixa;
    string mb;
    string hd;
    string fans;
    char perifericos[5];
};

class Computer{
    private:
    hardware computer;
    bool state;
    
    void formatar(){
        cout << "O computador vai ser formatado!" << endl;
    }
    void abrirPasta(){
        cout << "Abrindo pasta do computador!" << endl;
    }
    void iniciarSO(){
        cout << "Iniciando o Sistema Operacional!" << endl;
    }
    void iniciarGPU(){
        cout << "Iniciando GPU!" << endl;
    }
    void removerFicheiros(){
        cout << "Removendo ficheiros do computador!" << endl;
    }
    void listaHardware(){
        cout << endl;
        cout << "RAM: " << computer.ram << endl;
        cout << "GPU: " << computer.gpu << endl;
        cout << "CPU: " << computer.cpu << endl;
        cout << "PSU: " << computer.psu << endl;
        cout << "Caixa: " << computer.caixa << endl;
        cout << "Motherboard: " << computer.mb << endl;
        cout << "Disco: " << computer.hd << endl;
        cout << "Fans: " << computer.fans << endl;
        cout << "Perifericos: " << computer.perifericos << endl;
        for(int i = 0; i < 5; i++){
            cout << "\t";
            cout << computer.perifericos[i];
        }
        cout << endl;
        cout << endl;
    }

    public:

        Computer(hardware hardware){
            
            this->computer = hardware;
            this->state = false;
            cout << "o computador foi instanciado com sucesso! tem dos seguintes componentes:" << endl;
            listaHardware();
        }
        void ligar(){
            if(state == false){
                cout << "O computador ja esta ligado!" << endl;
            }else{
                cout << "O computador foi ligado!" << endl;
                this->state = true;;
            }
        }

        void reset(){
            if(state){
                cout << "O computador foi desligado!" << endl;
            }else{
                cout << "O computador esta desligado!" << endl;
            }
        }
        void desligar(){
            if(!state){
                cout << "O computador ja esta desligado!" << endl;
            }
            else{
                cout << "O computador foi desligado!" << endl;
                this->state = false;
            }
        }
        void abrirTampo(){
            cout << "O tampo do computador foi aberto!" << endl;
        }
        void executar(int opt){

            switch (opt)
            {
            case 1:
                if(state){
                    formatar();
                }else{
                    cout << "O computador esta desligado!" << endl;
                break;
            case 2:
                if(state){
                    abrirPasta();
                }else{
                    cout << "O computador esta desligado!" << endl;
                };
                break;
            case 3:
                if(state){
                    removerFicheiros();
                }else{
                    cout << "O computador esta desligado!" << endl;
                }
                break;
            default:
                cout << "Opcao invalida!" << endl;
                break;
            };
        };

        void Inputs(string input){
            if(state){
                cout << "O computador esta ligado!" << endl;
            }else{
                cout << "O computador esta desligado!" << endl;
            };
            };
        };
};

int main(){
    
    hardware hardware1 = {"16GB", "RTX 3090", "i7-10700K", "1000W", "CRPPRSAOR 4000D",
                          "Asus ROG Strix Z490-E", "1TB SSD", "Corsair LL120",{'M','K','P','L','J'}};
    
    execute(1);
}

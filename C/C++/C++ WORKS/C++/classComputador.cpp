#include "bibliotecas.h"

class Computador {
    private:
        string estado;
        string tampa;
        string pastaAberta;
    
    public:
        Computador() {
            estado = "Desligado";
            tampa = "Fechada";
            pastaAberta = "Nenhuma";
        }

        void Executar(int tarefa) {
            switch (tarefa) {
                case 1:
                    ligarComputador();
                    break;
                case 2:
                    desligarComputador();
                    break;
                case 3:
                    resetComputador();
                    break;
                case 4:
                    abrirTampa();
                    break;
                case 5:
                    fecharTampa();
                    break;
                case 6:
                    abrirPasta();
                    break;
                case 7:
                    fecharPasta();
                    break;
                default:
                    cout << "Tarefa inválida!" << endl;
                    break;
            }
        }

        void exibirEstado() {
            cout << "Estado do computador: " << estado << endl;
            cout << "Tampa: " << tampa << endl;
            cout << "Pasta aberta: " << pastaAberta << endl;
        }

    private:
        void ligarComputador() {
            if (estado == "Desligado") {
                cout << "Ligando o computador..." << endl;
                estado = "Ligado";
            } else {
                cout << "O computador já está ligado." << endl;
            }
        }

        void desligarComputador() {
            if (estado == "Ligado" || estado == "Reiniciado") {
                cout << "Desligando o computador..." << endl;
                estado = "Desligado";
            } else {
                cout << "O computador já está desligado." << endl;
            }
        }

        void resetComputador() {
            if (estado == "Ligado") {
                cout << "Reiniciando o computador..." << endl;
                estado = "Reiniciado";
            } else {
                cout << "O computador precisa estar ligado para ser reiniciado." << endl;
            }
        }

        void abrirTampa() {
            if (tampa == "Fechada") {
                cout << "Abrindo a tampa do computador..." << endl;
                tampa = "Aberta";
            } else {
                cout << "A tampa já está aberta." << endl;
            }
        }

        void fecharTampa() {
            if (tampa == "Aberta") {
                cout << "Fechando a tampa do computador..." << endl;
                tampa = "Fechada";
            } else {
                cout << "A tampa já está fechada." << endl;
            }
        }

        void abrirPasta() {
            if (estado == "Ligado") {
                if (pastaAberta == "Nenhuma") {
                    cout << "Abrindo uma pasta no computador..." << endl;
                    pastaAberta = "Pasta 1";
                } else {
                    cout << "Já existe uma pasta aberta: " << pastaAberta << endl;
                }
            } else {
                cout << "O computador precisa estar ligado para abrir uma pasta." << endl;
            }
        }

        void fecharPasta() {
            if (pastaAberta != "Nenhuma") {
                cout << "Fechando a pasta " << pastaAberta << "..." << endl;
                pastaAberta = "Nenhuma";
            } else {
                cout << "Nenhuma pasta está aberta." << endl;
            }
        }
};

struct Atributos {
    string ram;
    string PlacaVideo;
    string CPU;
    string PSU;
    string caixa;
    string motherboard;
    string discoRigido;
    string DespositivosExternos;

    void setAtributos(string ram, string PlacaVideo, string CPU, string PSU, string caixa, string motherboard, string discoRigido, string DespositivosExternos) {
        this->ram = ram;
        this->PlacaVideo = PlacaVideo;
        this->CPU = CPU;
        this->PSU = PSU;
        this->caixa = caixa;
        this->motherboard = motherboard;
        this->discoRigido = discoRigido;
        this->DespositivosExternos = DespositivosExternos;
    }
    void getAtributos() {
        cout << "Atributos do Computador:" << endl;
        cout << "RAM: " << ram << endl;
        cout << "Placa de Video: " << PlacaVideo << endl;
        cout << "CPU: " << CPU << endl;
        cout << "PSU: " << PSU << endl;
        cout << "Caixa: " << caixa << endl;
        cout << "Motherboard: " << motherboard << endl;
        cout << "Disco Rígido: " << discoRigido << endl;
        cout << "Dispositivos Externos: " << DespositivosExternos << endl;
    }
};

int main() {
    system("cls");
    Computador computador1;
    Atributos atributos1;
    
    atributos1.setAtributos("16GB", "Nvidia RTX 3090", "Intel Core i9", "Corsair RM850x", "NZXT H510 Elite", "ASUS ROG STRIX B550-F GAMING", "1TB SSD", "Mouse, Teclado, Monitor");
    computador1.Executar(1);

    return 0;
}

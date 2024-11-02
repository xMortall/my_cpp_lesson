#include "bibliotecas.h"

struct produtos {
    string nome;
    float preco;
    int quantidade;
};

produtos adicionarProduto(int &quantidadeAtual) {
    produtos p;
    cout << "Adicionar produto " << quantidadeAtual + 1 << endl;
    cout << "------------------" << endl;
    cout << "Nome: ";
    cin >> p.nome;
    cout << "Preco: ";
    cin >> p.preco;
    cout << "Quantidade: ";
    cin >> p.quantidade;
    return p;
}

float calcularProdutos(const produtos p[], int quantidadeAtual) {
    float total = 0;
    for (int i = 0; i < quantidadeAtual; i++) {
        total += p[i].preco * p[i].quantidade;
    }
    return total;
}

void exibirProduto(const produtos p) {
    cout << "Nome: " << p.nome << endl;
    cout << "Preco: " << p.preco << endl;
    cout << "Quantidade: " << p.quantidade << endl;
}

void exibirProdutos(const produtos p[], int quantidadeAtual) {
    for (int i = 0; i < quantidadeAtual; i++) {
        cout << "Produto " << i + 1 << endl;
        cout << "------------------" << endl;
        exibirProduto(p[i]);
        cout << endl;
    }
}

void salvarProdutosEmArquivo(const produtos p[], int quantidadeAtual) {
    ofstream arquivo("produtos.txt");
    if (!arquivo) {
        cerr << "Erro ao abrir o arquivo para escrita!" << endl;
        return;
    }
    for (int i = 0; i < quantidadeAtual; i++) {
        arquivo << p[i].nome << " " << p[i].preco << " " << p[i].quantidade << endl;
    }
    arquivo.close();
    cout << "Produtos salvos com sucesso!" << endl;
}

void carregarProdutosDoArquivo(produtos p[], int &quantidadeAtual) {
    ifstream arquivo("produtos.txt");
    if (!arquivo) {
        cerr << "Erro ao abrir o arquivo para leitura!" << endl;
        return;
    }
    quantidadeAtual = 0;
    while (arquivo >> p[quantidadeAtual].nome >> p[quantidadeAtual].preco >> p[quantidadeAtual].quantidade) {
        quantidadeAtual++;
    }
    arquivo.close();
    cout << "Produtos carregados com sucesso!" << endl;
}

void Menu() {
    int opcao;
    produtos p[10];
    int quantidadeAtual = 0;

    do {
        cout << "Menu" << endl;
        cout << "1. Adicionar produto" << endl;
        cout << "2. Exibir produtos" << endl;
        cout << "3. Calcular total" << endl;
        cout << "4. Salvar produtos em arquivo" << endl;
        cout << "5. Carregar produtos do arquivo" << endl;
        cout << "0. Sair" << endl;
        cout << "Escolha uma opcao: ";
        cin >> opcao;
        switch (opcao) {
            case 1:
                if (quantidadeAtual < 10) {
                    p[quantidadeAtual] = adicionarProduto(quantidadeAtual);
                    quantidadeAtual++;
                } else {
                    cout << "Capacidade máxima de produtos atingida!" << endl;
                }
                break;
            case 2:
                exibirProdutos(p, quantidadeAtual);
                break;
            case 3:
                cout << "Total: " << calcularProdutos(p, quantidadeAtual) << endl;
                break;
            case 4:
                salvarProdutosEmArquivo(p, quantidadeAtual);
                break;
            case 5:
                carregarProdutosDoArquivo(p, quantidadeAtual);
                break;
            case 0:
                cout << "Saindo" << endl;
                break;
            default:
                cout << "Opcao invalida" << endl;
                break;
        }
    } while (opcao != 0);
}

int main() {
    Menu();
    return 0;
}

#include "bibliotecas.h"

struct livro {
    string titulo;
    string autor;
    string subtitulo;
    string isbn;
};

livro insereLivro(livro l){
    cout << "Titulo: ";
    cin >> l.titulo;
    return l;
}

void mostraLivro(livro l){
    cout << "Titulo: " << l.titulo << endl;
}

int main() {
    livro livro1;

    livro1 = insereLivro(livro1);
    mostraLivro(livro1);

    return 0;
}

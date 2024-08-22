#include <iostream>
#include <vector>
#include <unordered_map>
#include <string>

using namespace std;

int main() {
    struct Livro {
        string codigo;
        int situacao; // se 1 = disponivel, se 2 = emprestado, cc = ñ existe no arquivo
    };

    int L; // quantos livros estão no Arquivo
    cin >> L;
    unordered_map<string, int> livros; // Mapa para armazenar código do livro e sua situação

    for (int i = 0; i < L; i++) {
        string codigo;
        int situacao;
        cin >> codigo >> situacao;
        livros[codigo] = situacao;
    }

    int A; // quantos livros há na lista de requisições dos arcanistas
    cin >> A;
    vector<string> codrequisitados(A);

    for (int i = 0; i < A; i++) {
        cin >> codrequisitados[i];
    }

    for (int i = 0; i < A; i++) {
        if (livros.find(codrequisitados[i]) != livros.end()) {
            if (livros[codrequisitados[i]] == 1) {
                cout << "Disponivel" << endl;
            } else {
                cout << "Emprestado" << endl;
            }
        } else {
            cout << "Nao encontrado" << endl;
        }
    }

    return 0;
}

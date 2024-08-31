#include <iostream>
using namespace std;

int main() {
    int fileiras, cadeiras, fileiraEscolhida = -1, assentoEscolhidoX = -1, assentoEscolhidoY = -1;
    cin >> fileiras >> cadeiras;

    int matriz[fileiras][cadeiras];

    for (int i = 0; i < fileiras; i++) {
        for (int j = 0; j < cadeiras; j++) {
            cin >> matriz[i][j];
        }
    }

    for (int i = 0; i < fileiras; i++) {
        for (int j = 0; j < cadeiras - 1; j++) {
            if (matriz[i][j] == 0 && matriz[i][j + 1] == 0) {
                fileiraEscolhida = i + 1;        
                assentoEscolhidoX = j + 1;
                assentoEscolhidoY = j + 2;
                break;  
            }
        }
        if (fileiraEscolhida != -1) break;  
    }

    cout << "Fileira: " << fileiraEscolhida << endl;
    cout << "Assentos: " << assentoEscolhidoX << " e " << assentoEscolhidoY << endl;

    return 0;
}

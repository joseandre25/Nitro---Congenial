#include <iostream>
using namespace std;

int main(){

    int N, M, contador = 0;
    cin >> N >> M;
    //indicando respectivamente o número de dimensões disponíveis no universo 
    // e o número de dimensões que Morty deseja visitar.

    int dimensoesDisponiveis[N], dimensoesDesejadas[M];
    
    for (int i = 0; i < N; i++) {
        cin >> dimensoesDisponiveis[i];
    }

    for (int i = 0; i < M; i++) {
        cin >> dimensoesDesejadas[i];
    }

    for (int i = 0; i < N; i++) {
        for (int j = 0; j < M; j++) {
            if (dimensoesDesejadas[j] == dimensoesDisponiveis[i]) {
                contador++;
            }
        }
    }

    cout << contador << endl;
    return 0;
}
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

int main() {
    int N, M;
    cin >> N >> M;

    vector<int> casas(N);
    unordered_map<int, int> indiceCasa;  // com o map consigo a busca em O(1) e evito a linearidade anterior que resultava em TLE
    for (int i = 0; i < N; ++i) {
        cin >> casas[i];
        indiceCasa[casas[i]] = i; 
    }

    vector<int> encomendas(M);
    for (int i = 0; i < M; ++i) {
        cin >> encomendas[i];
    }

    int indiceAtual = 0;
    int tempoTotal = 0;

    for (int i = 0; i < M; ++i) {
        int casaEntrega = encomendas[i];
        int indiceEntrega = indiceCasa[casaEntrega]; 

        tempoTotal += abs(indiceEntrega - indiceAtual);

        indiceAtual = indiceEntrega;
    }

    cout << tempoTotal << endl;

    return 0;
}

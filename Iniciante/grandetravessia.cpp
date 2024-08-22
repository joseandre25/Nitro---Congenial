#include <iostream>
using namespace std;

int main()
{
    int S; // o número de sapos na família
    int N; // o número de pedras no caminho
    cin >> S >> N;

    int P[S]; // tamanho do pulo de cada sapo

    for (int i = 0; i < S; i++)
    {
        cin >> P[i];
    }

    int X[N]; // Vetor de pedras

    for (int i = 0; i < N; i++)
    {
        X[i] = 0; // Inicializa todas as pedras como não pisadas
    }

    // Para cada sapo
    for (int j = 0; j < S; j++)
    {
        int pos = 0; // Posição inicial do sapo na pedra 0
        // Enquanto a posição do sapo for menor que o número total de pedras
        while (pos < N)
        {
            // Marca a pedra como pisada pelo sapo
            X[pos] = 1;
            // Atualiza a posição do sapo de acordo com o tamanho do seu pulo
            pos += P[j];
        }
    }

    // Imprime o estado de todas as pedras
    for (int i = 0; i < N; i++)
    {
        cout << X[i] << " ";
    }

    return 0;
}

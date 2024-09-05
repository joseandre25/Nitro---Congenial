#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M; // número de pedras no rio e o número de sapos
    cin >> N >> M;

    vector<int> P(M), D(M); // P = pos inicial de um sapo, D = distancia fixa de pulo
    vector<int> Y(N, 0); // vetor de pedras, inicializado com zeros


    for (int i = 0; i < M; i++)
    {
        cin >> P[i] >> D[i];
        P[i]--; 
    }


    for (int i = 0; i < M; i++)
    {
        Y[P[i]] = 1;

        // se pula pra frente
        for (int j = P[i] + D[i]; j < N; j += D[i])
        {
            Y[j] = 1;
        }

        // se pula pra tras
        for (int j = P[i] - D[i]; j >= 0; j -= D[i])
        {
            Y[j] = 1;
        }
    }

    for (int i = 0; i < N; i++)
    {
        cout << Y[i] << endl;
    }

    return 0;
}

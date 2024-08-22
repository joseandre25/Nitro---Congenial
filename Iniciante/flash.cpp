#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, M, y = 0; // a quantidade de placas vistas e a quantidade das últimas placas memorizadas por Flash.
    cin >> N >> M;

    vector<int> L(N);
    for (int i = 0; i < N; i++)
    {
        cin >> L[i];
    }
    // eu quero ignorar os zeros
    // penso em fazer uma funcao que cria uma cópia do vetor original mas sem os zeros
    // após isso, imprimir os M elementos desse vetor cópia começando pelos últimos elementos

    for (int i = 0; i < N; ++i)
    {
        if (L[i] != 0)
        {
            y++;
        }
    }

    vector<int> vetorSemZeros;
    vetorSemZeros.reserve(y);

    for (int i = 0; i < N; i++)
    {
        if (L[i] != 0)
        {
            vetorSemZeros.push_back(L[i]);
        }
    }

    vector<int> vetorFinal(y);
    int x = 0;
    for (int i = y - 1; i >= 0; i--)
    {
        vetorFinal[x] = vetorSemZeros[i];
        x++;
    }

    for (int i = M - 1; i >= 0; i--)
    {
        cout << vetorFinal[i] << " ";
    }
    cout << endl;
    return 0;
}
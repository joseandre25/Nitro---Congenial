#include <iostream>
using namespace std;

int main(){

    int N; // dimensão dos dois mapas que devem ser lidos
    cin >> N;

    // somar o elemento Aij com o elemento Bij para todo ij
    int mapa1[N][N];
    int mapa2[N][N];

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> mapa1[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cin >> mapa2[i][j];
        }
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N; j++)
        {
            cout << mapa1[i][j] + mapa2[i][j] << " ";
        }
        cout << endl;
    }
     
    return 0;
}
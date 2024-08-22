#include <iostream>
using namespace std;

int main()
{
    int N; // quantidade de barcos que o rei possui
    cin >> N;

    int T[N]; // número de guerreiros que estão em cada barco.
    for (int i = 0; i < N; i++)
    {
        cin >> T[i];
    }

    for (int i = 0; i < N; i++)
    {
        for (int j = 0; j < N - i - 1; j++)
        {
            if (T[j] < T[j + 1])
            {
                swap(T[j], T[j+1]);
            }    
        }     
    }

    for (int i = 0; i < N; i++)
    {
        cout << T[i] << " ";
    }

    cout << endl;
    
    return 0;
}

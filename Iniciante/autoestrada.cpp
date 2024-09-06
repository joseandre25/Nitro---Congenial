#include <iostream>
#include <string>

using namespace std;

int main()
{
    int C, qtd = 0;
    cin >> C;

    string D;
    cin >> D;
    
    for (int i = 0; i < C; i++)
    {
        if (D[i] == 'P' || D[i] == 'C')
        {
            qtd += 2;
        }
        else if (D[i] == 'A')
        {
            qtd++;
        }
    }

    cout << qtd << endl;

    return 0;
}
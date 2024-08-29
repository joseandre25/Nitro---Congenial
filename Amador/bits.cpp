#include <iostream>
using namespace std;

int main()
{
    int V, teste = 0;
    while (cin >> V && V)
    {
        int notaCinquenta = 0, notaDez = 0, notaCinco = 0, notaUm = 0;
        teste++;

        while (V != 0)
        {
            if (V >= 50)
            {
                notaCinquenta++;
                V -= 50;
            }
            else if (V >= 10)
            {
                notaDez++;
                V -= 10;
            }
            else if (V >= 5)
            {
                notaCinco++;
                V -= 5;
            }
            else if (V >= 1)
            {
                notaUm++;
                V -= 1;
            }
        }

        cout << "Teste " << teste << endl;
        cout << notaCinquenta << " " << notaDez << " " << notaCinco << " " << notaUm << endl;
        cout << endl;
    }

    return 0;
}
#include <iostream>
using namespace std;

int main()
{
    int N, X = 0;
    cin >> N;

    string quarto;

    while (quarto != "FIM")
    {
        cin >> quarto;
        if (quarto == "Casal")
        {
            X += 2;
        } 
        if (quarto == "Triplo")
        {
            X += 3;
        }
        if (quarto == "Quadruplo")
        {
            X += 4;
        }
        if (quarto == "Familia")
        {
            X += 5;
        }
    }

    if (X >= N)
    {
        cout << "Pode reservar! Esses quartos cabem todos." << endl;
    } else {
        cout << "Procure outra pousada." << endl;
    }

    return 0;
}

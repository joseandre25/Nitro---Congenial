#include <iostream>
#include <string.h>

using namespace std;

int main()
{
    string tipo;
    getline(cin, tipo);

    if (tipo == "demônio do fogo")
    {
        cout << "A fraqueza do demônio é: água" << endl;
    } else if (tipo == "demônio da escuridão")
    {
        cout << "A fraqueza do demônio é: luz" << endl;
    } else if (tipo == "demônio da fumaça")
    {
        cout << "A fraqueza do demônio é: vento" << endl;
    } else if (tipo == "demônio do gelo")
    {
        cout << "A fraqueza do demônio é: fogo" << endl;
    } else {
         cout << "Não foi possível identificar a fraqueza do demônio" << endl;
    }
    
    return 0;
}

#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int qtdInicial, qtdDesistentes;
    cin >> qtdInicial;

    vector<int> id(qtdInicial);
    for (int i = 0; i < qtdInicial; i++)
    {
        cin >> id[i];
    }

    cin >> qtdDesistentes;
    vector<int> idDesistente(qtdDesistentes);
    for (int i = 0; i < qtdDesistentes; i++)
    {
        cin >> idDesistente[i];
    }

    for (int i = 0; i < qtdDesistentes; i++)
    {
        for (int j = 0; j < id.size(); j++)
        {
            if (idDesistente[i] == id[j])
            {
                id.erase(id.begin() + j);
                j--;
            }
        }
    }

    for (int i = 0; i < id.size(); i++)
    {
        cout << id[i] << " ";
    }
    cout << endl;

    return 0;
}
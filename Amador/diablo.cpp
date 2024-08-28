#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{

    int quantidadeItens, dinheiro;
    cin >> quantidadeItens;

    vector<int> valoresItens(quantidadeItens);
    for (int i = 0; i < quantidadeItens; i++)
    {
        cin >> valoresItens[i];
    }

    vector<int> danoItens(quantidadeItens);
    for (int i = 0; i < quantidadeItens; i++)
    {
        cin >> danoItens[i];
    }

    cin >> dinheiro;

    bool dinheiroCompra = false, achou = false;
    for (int i = 0; i < quantidadeItens; i++)
    {
        if (dinheiro >= valoresItens[i])
        {
            dinheiroCompra = true;
        }
    }

    if (!dinheiroCompra)
    {
        cout << "Yan Pobre" << endl;
    }
    else
    {
        // talvez eu deva fazer uma cópia do vetor dano e ordenar essa cópia
        // após isso, consultar se o dinheiro é igual ou maior ao valor do item com o maior dano

        vector<int> copiaDano(quantidadeItens);
        for (int i = 0; i < quantidadeItens; i++)
        {
            copiaDano[i] = danoItens[i];
        }

        sort(copiaDano.begin(), copiaDano.end());
        for (int i = quantidadeItens - 1; i >= 0; i--)
        {
            for (int j = 0; j < quantidadeItens; j++)
            {
                if (copiaDano[i] == danoItens[j])
                {
                    // cout << "O item de maior dano tem dano igual a " << copiaDano[i] << " e está na seguinte posição do vetor copia dano: " << i << " e esta na seguinte posicao do vetor dano original: " << j << endl;
                    if (dinheiro >= valoresItens[j])
                    {
                        cout << valoresItens[j] << " " << copiaDano[i] << endl;
                        achou = true;
                    }
                }
            }
            if (achou)
            {
                break;
            }
        }
    }

    return 0;
}
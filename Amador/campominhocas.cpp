#include <iostream>

using namespace std;

int main() {

  int linhas, colunas;
  cin >> linhas >> colunas;

  int matriz[linhas][colunas];
  for (int i = 0; i < linhas; i++)
  {
    for (int j = 0; j < colunas; j++)
    {
        cin >> matriz[i][j];
    } 
  }
  
  int maiorSomaLinha = 0, maiorSomaColuna = 0;

  for (int i = 0; i < linhas; i++)
  {
    int somaLinha = 0;
    for (int j = 0; j < colunas; j++)
    {
        somaLinha += matriz[i][j];
    }
    if (somaLinha > maiorSomaLinha)
    {
        maiorSomaLinha = somaLinha;
    }
  }

  for (int i = 0; i < colunas; i++)
  {
    int somaColuna = 0;
    for (int j = 0; j < linhas; j++)
    {
        somaColuna += matriz[j][i];
    }
    if (somaColuna > maiorSomaColuna)
    {
        maiorSomaColuna = somaColuna;
    }
  }

  if (maiorSomaColuna > maiorSomaLinha)
  {
    cout << maiorSomaColuna << endl;
  } else {
    cout << maiorSomaLinha << endl;
  }

  return 0;
}
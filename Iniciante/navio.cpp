#include <iostream>
using namespace std;

string navioPosicao(int x, int y){

    if (x > 0 && x < 100 && y > 0 && y < 100)
    {
        if (x > 70 || y > 70)
        {
            return "Coordenada valida e o navio esta longe";
        }
        return "Coordenada valida e o navio esta perto";
    }
    return "Coordenada invalida";
}


int main() {
  int x, y;
  string resposta;

  cin >> x >> y;

  resposta = navioPosicao(x, y);
  cout << resposta << endl;

  return 0;
}
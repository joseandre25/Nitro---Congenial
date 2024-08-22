#include <iostream>
using namespace std;

int main() {

  int N, C, sum = 0, qtdC = 0, pontos; // N = número de balões que Thiago estourou; 
  // C =  pontuação a ser retirada toda vez que um balão daquela cor for estourado

  cin >> N;
  int P[N];

  for (int i = 0; i < N; i++)
  {
    cin >> P[i]; // a pontuação de cada balão estourado
    sum += P[i];
  }
  
  cin >> C;

  for (int i = 0; i < N; i++)
  {
    if (P[i] == C)
    {
        qtdC++;
    }
    
  }
  
  pontos = sum  - 2 * (qtdC * C);
  cout << pontos << endl;
  return 0;
}
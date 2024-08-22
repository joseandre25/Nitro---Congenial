#include <iostream>
using namespace std;

int main() {

  int T, N, Dano = 0;
  cin >> T;
  cin >> N;

  int X[N];
  for (int i = 0; i < N; i++)
  {
    cin >> X[i];
    Dano += X[i] * T;
  }

  if (Dano >= 28000)
  {
    cout << "Macacos venceram!" << endl;
  } else cout << "O BAD venceu!" << endl;
  
  
  return 0;
}
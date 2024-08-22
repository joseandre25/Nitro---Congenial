#include <iostream>

using namespace std;

int main() {

  int A, D, P;
  float soma;
  cin >> A >> D >> P;

  soma = A + D + P;

  float X = (soma / 110);
  
  if (X > 1)
  {
    cout << "Hum, parece que houve um erro" << endl;
  } else if (X >= 0 && X <= 0.5)
  {
    cout << "Seu pokemon nao fara progresso em batalhas" << endl;
  } else if (X > 0.5 && X <= 0.66)
  {
    cout << "Seu pokemon esta acima da media" << endl;
  } else if (X > 0.66 && X <= 0.79)
  {
    cout << "Seu pokemon certamente me chamou atencao" << endl;
  } else {
    cout << "Seu pokemon e uma maravilha" << endl;
  }
  return 0;
}
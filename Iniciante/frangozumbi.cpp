#include <iostream>
using namespace std;

int main() {
  char A;
  int B;

  cin >> A >> B;

  switch (A)
  {
  case  'S':
    if (B < 7)
    {
        cout << "Acesso negado! Isolamento urgente" << endl;
    } else if (B >= 30)
    {
        cout << "Imune! Siga para um local seguro" << endl;
    } else {
        cout << "Acesso negado! Fique em observacao" << endl;
    }
    break;
  default:
    cout << "Acesso permitido!" << endl;
    break;
  }
  return 0;
}
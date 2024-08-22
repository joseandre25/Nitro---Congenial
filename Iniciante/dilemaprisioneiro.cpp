#include <iostream>
using namespace std;

int main() {
  // Escreva seu código aqui
  int A, B; // 0 (indicando traição) ou 1 (indicando cooperação).
  cin >> A >> B;

  if(A == 1 && B == 1){
    cout << "Resultado para o Prisioneiro A: sentença leve (1 ano)" << endl << "Resultado para o Prisioneiro B: sentença leve (1 ano)" << endl;
  } else if(A == 1 && B == 0){
    cout << "Resultado para o Prisioneiro A: sentença pesada (10 anos)" << endl << "Resultado para o Prisioneiro B: livre" << endl;
  } else if(A == 0 && B == 1){
    cout << "Resultado para o Prisioneiro A: livre" << endl << "Resultado para o Prisioneiro B: sentença pesada (10 anos)" << endl;
  } else {
    cout << "Resultado para o Prisioneiro A: sentença moderada (5 anos)" << endl << "Resultado para o Prisioneiro B: sentença moderada (5 anos)" << endl;
  }
  return 0;
}
#include <iostream>
using namespace std;

int main() {
  // Para cada espada forjada, Gendry utiliza 2 fragmentos de aço valiriano, 3 pedaços de madeira e 5 tiras de couro.
  int A, M, C, qtdA, qtdM, qtdC; // quantidade de fragmentos de aço valiriano, pedaços de madeira e tiras de couro.
  cin >> A >> M >> C;

  // Seu programa deverá imprimir a quantidade máxima de espadas que Gendry poderá forjar.
  qtdA = A / 2;
  qtdM = M / 3;
  qtdC = C / 5;

  if (A < 2 || M < 3 || C < 5)
  {
    cout << "0" << endl;
  } else if (qtdA < qtdM && qtdA < qtdC)
  {
    cout << qtdA << endl; 
  } else if (qtdM < qtdA && qtdM < qtdC)
  {
    cout << qtdM << endl;
  } else {
    cout << qtdC << endl; 
  }
  
  return 0;
}
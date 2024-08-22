#include <iostream>
using namespace std;

int main() {

  int A, B, C;
  cin >> A >> B >> C;

  int qtdMax = A * B;

  if(C <= qtdMax) {
    cout << "S" << endl;
  } else {
    cout << "N" << endl;
  }

  return 0;
}
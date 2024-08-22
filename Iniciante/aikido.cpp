#include <iostream>
using namespace std;

int main() {

  int x, y;
  cin >> x >> y;

  if (x < 1) {
    cout << "branca" << endl;
  } else if (y >= 60 && y < 72) {
    cout << "amarela" << endl;
  } else if (y >= 72 && y < 90) {
    cout << "roxa" << endl;
  } else if (y >= 90 && y < 110) {
    cout << "verde" << endl;
  } else if (y >= 110 && y < 120) {
    cout << "azul" << endl;
  } else if (y >= 120) {
    cout << "marrom" << endl;
  }
  
  return 0;
}
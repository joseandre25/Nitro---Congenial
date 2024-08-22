#include <iostream>
using namespace std;

int main() {
  char z, g, d, c;
  cin >> z >> g;
  cin >> d >> c;

  if (z == d) {
    cout << "Bloqueado" << endl;
  } else {
    if (g == c) {
      cout << "Driblado\n...e o goleiro pega" << endl;
    } else {
      cout << "Driblado\nGol" << endl;
    }
  }
  return 0;
}

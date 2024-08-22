#include <iostream>
using namespace std;

int main() {

  int N, XP, XPy, XPl, XPa;

  cin >> N >> XP;
  cin >> XPy >> XPl >> XPa;

  cout << "Yoda " << XPy + (N * XP) << endl << "Luke " << XPl + (N * XP) << endl << "Ahsoka " << XPa + (N * XP) << endl;
  return 0;
}
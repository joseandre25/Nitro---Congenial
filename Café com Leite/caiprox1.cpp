#include <iostream>
using namespace std;

int main() {
  int L, P, Ls, Ps;
  
  for (int i = 0; i < 3; i++)
  {
    cin >> L >> P;
    Ls += L;
    Ps += P;
  }

  if (Ls == Ps)
  {
    cout << "Empate" << endl;
  } else if (Ls > Ps)
  {
    cout << "Lucas" << endl;
  } else {
    cout << "Pedro" << endl;
  }
  
  return 0;
}
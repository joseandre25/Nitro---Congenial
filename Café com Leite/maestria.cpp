#include <iostream>
using namespace std;

int main() {

  int N1, N2, N3, N4, N5, N6, P;
  cin >> N1 >> N2 >> N3 >> N4 >> N5 >> N6;

  P = N1 + N2 + N3 + N4 + N5 + N6;

  if (P >= 250)
  {
    cout << "S+" << endl;
  } else if (P >= 200 && P < 250)
  {
    cout << "S" << endl;
  } else if (P >= 180 && P < 200)
  {
    cout << "S-" << endl;
  } else if (P >= 150 && P < 180)
  {
    cout << "A+" << endl;
  } else if (P >= 100 && P < 150)
  {
    cout << "A" << endl;
  } else if (P >= 80 && P < 100)
  {
    cout << "A-" << endl;
  } else if (P >= 60 && P < 80)
  {
    cout << "B+" << endl;
  } else if (P >= 40 && P < 60)
  {
    cout << "B" << endl;
  } else 
  {
    cout << "B-" << endl;
  }
  
  return 0;
}
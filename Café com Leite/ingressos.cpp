#include <iostream>
#include <string>
using namespace std;

int main() {
  string categoria;
  cin >> categoria;
  
  if (categoria == "idoso")
  {
    cout << "gratuidade" << endl;
  } else if (categoria == "estudante")
  {
    cout << "10 reais" << endl;
  } else if (categoria == "casadinha")
  {
    cout << "30 reais" << endl;
  } else if (categoria == "trio")
  {
    cout << "40 reais" << endl;
  } else 
  {
    cout << "20 reais" << endl;
  }
  
  
  return 0;
}
#include <iostream>
using namespace std;

int main() {
  int N, aux = 1;
  cin >> N;


  while (N >= 1)
  {
    aux *= N;
    N--;
  }
  
  cout << aux << endl;
  
  return 0;
}
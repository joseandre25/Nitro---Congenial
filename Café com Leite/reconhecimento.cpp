#include <iostream>
using namespace std;

int main() {

  int N;
  cin >> N;

  if (N <= 20)
  {
    cout << "0" << endl;
  } else {
    cout << (N - 20) / 5 << endl;
  }
  
  return 0;
}
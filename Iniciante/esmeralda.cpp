#include <iostream>
using namespace std;

int main() {

  int N, C;
  bool encontrado = false;
  cin >> N;

  int V[N];
  for (int i = 0; i < N; i++)
  {
    cin >> V[i];
  }
  
  cin >> C;

  for (int i = 0; i < N; i++)
  {
    if (V[i] == C)
    {
        encontrado = true;
    }
  }
  
  if (encontrado)
  {
    cout << C << endl;
  } else {
    cout << "-1" << endl;
  }
  

  return 0;
}
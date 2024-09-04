#include <iostream>
#include <vector>

using namespace std;

int main() {

  int N, S, qtdSaltos = 0;
  bool pulouTodos = true;

  cin >> N;

  vector <int> A(N);
  for (int i = 0; i < N; i++)
  {
    cin >> A[i];
  }
  
  cin >> S;

  for (int i = 0; i < N; i++)
  {
    if (S >= A[i])
    {
        qtdSaltos++;
    } else {
        pulouTodos = false;
        break;
    }
  }
  
  cout << qtdSaltos << endl << pulouTodos? 1 : 0;
  cout << endl;

  return 0;
}
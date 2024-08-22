#include <iostream>
using namespace std;

int main() {

  int N, C, pesoTotal = 0;
  cin >> N;

  string Nomes[N];
  int K[N];

  for (int i = 0; i < N; i++)
  {
    cin >> Nomes[i] >> K[i];
    pesoTotal += K[i];
  }
  
  cin >> C;
  
  if (pesoTotal <= C)
  {
    cout << "Vamos todos encontrar a montanha!" << endl;
  } else {
    cout << "Vamos virar almoço de aranhas gigantes!" << endl;
  }
  return 0;
}
#include <iostream>
using namespace std;

string levelUp(int M, int N){

    int X[N], B[N], PF = 0;

    for (int i = 0; i < N; i++)
    {
        cin >> X[i];
    }

    for (int j = 0; j < N; j++)
    {
        cin >> B[j];
    }
    
    for (int k = 0; k < N; k++)
    {
        int P = X[k] * B[k];
        PF += P;
    }
    
    if (PF >= M)
    {
        return "Upou de Nivel!";
    }
    
    return "Nao foi dessa vez!";
}

int main() {

  int M, N;
  cin >> M;
  cin >> N;
  
  string resposta = levelUp(M, N);
  cout << resposta << endl;
  
  return 0;
}
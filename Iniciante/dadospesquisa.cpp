#include <iostream>
using namespace std;

int main()
{
  int N, Q, Z;
  cin >> N >> Q;

  int R[Q], contador[N] = {0};

  for (int i = 0; i < Q; i++)
  {
    cin >> R[i];
  }

  cout << "Mod " << N << endl;

  for (int i = 0; i < Q; i++)
  {
    Z = R[i] % N;
    contador[Z]++;
  }

  for (int i = 0; i < N; i++)
  {
    cout << i << ": " << contador[i] << endl;
  }

  return 0;
}
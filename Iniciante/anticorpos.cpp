#include <iostream>
using namespace std;

int main() {
  int N, M;
  cin >> N >> M;

  int lamina[N][M];
  bool encontrou = false;

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
        cin >> lamina[i][j];
    }
  }

  for (int i = 0; i < N; i++)
  {
    for (int j = 0; j < M; j++)
    {
        if (lamina[i][j] == 0)
        {
            if (lamina[i-1][j] == 1 && lamina[i][j-1] == 1 && lamina[i+1][j] == 1 && lamina[i][j+1] == 1)
            {
                encontrou = true;
                cout << i << " " << j << endl;
            }
        }
    }
  }

  if (!encontrou)
  {
    cout << "0 0" << endl;
  }
  
  return 0;
}
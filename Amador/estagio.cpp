#include <iostream>
#include <vector>

using namespace std;

int main()
{

    int N, turma = 0;

    while (cin >> N && N)
    {
        turma++;
        int maiorNota = 0;

        vector<int> C(N);
        vector<int> M(N);

        for (int i = 0; i < N; i++)
        {
            cin >> C[i] >> M[i];
            if (M[i] > maiorNota)
            {
                maiorNota = M[i];
            }
        }

        cout << "Turma " << turma << endl;
        for (int i = 0; i < N; i++)
        {
            if (M[i] == maiorNota)
            {
                cout << C[i] << " ";
            }
        }

        cout << endl;
        cout << endl;
    }

    return 0;
}
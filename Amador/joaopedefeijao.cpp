#include <iostream>
#include <cmath>
#include <string>

using namespace std;

int main()
{
    int N;
    while (cin >> N && N)
    {
        if (N == 1)
        {
            cout << N << ": S" << endl;
        }
        else
        {
            int quadradoN = pow(N, 2);
            string N_str = to_string(quadradoN);
            int tamanho = N_str.length();
            bool isKaprekar = false;

            for (int i = 1; i < tamanho; ++i)
            {
                string p1 = N_str.substr(0, i);
                string p2 = N_str.substr(i);

                int N1 = stoi(p1);
                int N2 = stoi(p2);

                if (N2 > 0 && (N1 + N2) == N)
                {
                    isKaprekar = true;
                    break;
                }
            }

            if (isKaprekar)
            {
                cout << N << ": S" << endl;
            }
            else
            {
                cout << N << ": N" << endl;
            }
        }
    }

    return 0;
}

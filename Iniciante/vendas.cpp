#include <iostream>
#include <iomanip>
using namespace std;

void valorTotal(int N)
{
    cout << fixed << setprecision(2);

    int C;
    float P, Vt = 0.00;

    for (int i = 0; i < N; i++)
    {
        cin >> C >> P;
        Vt += C * P;
    }
    cout << Vt << endl;
}

int main()
{
    int N;
    cin >> N;

    valorTotal(N);
    return 0;
}
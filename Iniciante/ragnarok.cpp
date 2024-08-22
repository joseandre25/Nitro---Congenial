#include <iostream>
using namespace std;

int main()
{
    int X, S;
    cin >> X;

    int Z[X];
    for (int i = 0; i < X; i++)
    {
        cin >> Z[i];
    }

    cin >> S;

    for (int i = 0; i < X; i++)
    {
        cout << Z[i] * S << " ";
    }

    cout << endl;
    return 0;
}

#include <iostream>
using namespace std;

int main()
{

    int T, P;
    bool passou = false;
    cin >> T;

    do
    {
        cin >> P;
        if (P > T)
        {
            passou = true;
        }

    } while (P != 0);

    if (passou)
    {
        cout << "ALARME" << endl;
    }
    else
    {
        cout << "O Havai pode dormir tranquilo" << endl;
    }

    return 0;
}
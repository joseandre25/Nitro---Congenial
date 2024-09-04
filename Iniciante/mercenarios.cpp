#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int N, B;
    cin >> N;

    vector <int> A(N);
    for (int i = 0; i < N; i++)
    {
        cin >> A[i];
    }

    cin >> B;

    for (int i = 0; i < N; i++)
    {
        cout << A[i] * B << " ";
    }

    cout << endl;
    
    return 0;
}

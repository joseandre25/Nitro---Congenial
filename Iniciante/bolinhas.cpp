#include <iostream>
#include <cmath> 
using namespace std;

int main() {
    int N, Q;
    cin >> N >> Q;

    // PG
    long long totalBolinhas = Q * (pow(2, N) - 1) / (2 - 1);

    cout << totalBolinhas << endl;

    return 0;
}

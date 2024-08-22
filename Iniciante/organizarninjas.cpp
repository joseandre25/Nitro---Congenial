#include <iostream>

using namespace std;

int main(){

    int N; // quantidade de frentes de batalha
    cin >> N;

    int F[N]; // número de ninjas que estão em cada uma das frentes

    for (int i = 1; i <= N; i++) {
        cin >> F[i];
    }

    for (int i = N; i > 0; i--) {
        cout << i << ":" << " " << F[i] << endl;
    }

    return 0;
}
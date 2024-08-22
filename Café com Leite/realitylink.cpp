#include <iostream>
using namespace std;

int main(){

    int N, X, contador = 0;
    cin >> N;

    int E[N];

    for (int i = 0; i < N; i++) {
        cin >> E[i];
    }

    cin >> X;

    for (int i = 0; i < N; i++) {
        if (E[i] == X) {
            contador++;
        }
    }

    cout << contador << endl;

    return 0;
}
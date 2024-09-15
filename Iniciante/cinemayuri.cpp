#include <iostream>
#include <vector>

using namespace std;

int main() {
    int N, P;
    cin >> N;  
    cin >> P; 

    vector<bool> assentos(N + 1, false);  

    if (P > 0) {
        for (int i = 0; i < P; i++) {
            int ocupado;
            cin >> ocupado;
            assentos[ocupado] = true;  
        }
    }

    for (int i = 1; i <= N; i++) {
        if (!assentos[i]) {
            cout << i << " ";
        }
    }
    cout << endl;

    return 0;
}

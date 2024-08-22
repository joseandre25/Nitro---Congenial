#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

int main() {
    int C, T;
    cin >> C >> T;

    vector<int> raios(C);
    for (int i = 0; i < C; ++i) {
        cin >> raios[i];
    }

    int totalPontos = 0;
    for (int i = 0; i < T; ++i) {
        int x, y;
        cin >> x >> y;
        int pontos = 0;
        double distancia = sqrt(x * x + y * y);
        for (int j = 0; j < C; ++j) {
            if (distancia <= raios[j]) {
                ++pontos;
            }
        }
        totalPontos += pontos;
    }

    cout << totalPontos << endl;

    return 0;
}

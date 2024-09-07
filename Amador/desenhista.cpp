#include <iostream>
using namespace std;

int main() {
    int P; // Altura da pirâmide
    cin >> P;
    char esp = '>';

    for (int i = 1; i <= P; i++) {
        int vazio = P - i;
        for (int i = 1; i <= vazio; i++)
        {
            cout << esp;
        }
        for (int j = 0; j < i; j++) {
            cout << '#';
        }
        cout << endl;
    }

    return 0;
}

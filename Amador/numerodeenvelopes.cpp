#include <iostream>
#include <vector>
#include <algorithm> 
using namespace std;

int main() {
    int N, K;
    cin >> N >> K;

    vector<int> tiporotulo(K, 0);

    for (int i = 0; i < N; ++i) {
        int rotulo;
        cin >> rotulo;
        tiporotulo[rotulo - 1]++;  
    }

    
    int qtdMin = *min_element(tiporotulo.begin(), tiporotulo.end());

    cout << qtdMin << endl;

    return 0;
}

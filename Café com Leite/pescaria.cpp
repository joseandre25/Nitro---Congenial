#include <iostream>

using namespace std;

int main()
{
    int N, V;
    cin >> N;
    cin >> V;

    if ((N * V) < 500)
    {
        cout << "Paciencia Firmino!" << endl;
    } else if ((N * V) >= 500 && (N * V) < 1800){
        cout << "Vara de Bambu" << endl;
    } else if ((N * V) >= 1800 && (N * V) < 7500){
        cout << "Vara de Fibra de Vidro" << endl;
    } else {
        cout << "Vara de Iridio" << endl;
    }
    
    return 0;
}

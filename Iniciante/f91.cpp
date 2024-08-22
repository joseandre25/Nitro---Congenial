#include <iostream>
using namespace std;

int f91(int n){
    int x;
    if (n <= 100)
    {
        x = f91(f91(n + 11));
    } else {
        x = n - 10;
    }    
    return x;
}

int main() {

    int n;
    while (cin >> n && n)
    {
        int y = f91(n);
        cout << "f91" << "(" << n << ")" << " = " << y << endl;
    }

  return 0;
}
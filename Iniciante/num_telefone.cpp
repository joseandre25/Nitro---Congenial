#include <iostream>

using namespace std;

char numEquivalente(char c){
    if (c == 'A' || c == 'B' || c == 'C')
    {
        char c = '2';
        return c;
    } else if (c == 'D' || c == 'E' || c == 'F')
    {
        char c = '3';
        return c;
    } else if (c == 'G' || c == 'H' || c == 'I')
    {
        char c = '4';
        return c;
    } else if (c == 'J' || c == 'K' || c == 'L')
    {
        char c = '5';
        return c;
    } else if (c == 'M' || c == 'N' || c == 'O')
    {
        char c = '6';
        return c;
    } else if (c == 'P' || c == 'Q' || c == 'R' || c == 'S')
    {
        char c = '7';
        return c;
    } else if (c == 'T' || c == 'U' || c == 'V')
    {
        char c = '8';
        return c;
    } else if (c == 'W' || c == 'X' || c == 'Y' || c == 'Z')
    {
        char c = '9';
        return c;
    } else {
        return c;
    }
}

int main() {

  char numero[16], numeroFinal[16];
  cin >> numero;

  for (int i = 0; i < 16; i++)
  {
    numeroFinal[i] = numEquivalente(numero[i]);
  }
  
  cout << numeroFinal << endl;

  return 0;
}
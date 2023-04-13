#include <iostream>
using namespace std;

int main() {
  int a, b, wynik;
    
  {
  cout << "podaj dzielna: " ;
  cin >> a;
  cout << "podaj dzielnik: ";
  cin >> b;
  wynik = a / b ;
  cout << "wynik wynosi: " << wynik << endl;
  }
  return 0;
}

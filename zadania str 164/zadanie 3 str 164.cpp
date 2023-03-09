#include <iostream>
using namespace std;

int main() {
  int a, b, iloraz;
  cout << "Wartosc a: ";
  cin >> a;
  cout << "Wartpsc b: ";
  cin >> b;
  if (b == 0) {
    cout << "Przez zero nie dzielimy";
    return 1;
    }
  else{ 
    iloraz = a / b;
    cout << "iloraz wynosi: " << iloraz;
    }
}
#include <iostream>
using namespace std;

int main() {
  int liczb1, liczb2, liczb3, suma, srednia;
  cout << "liczba 1: ";
  cin >> liczb1;
  cout << "liczba 2: ";
  cin >> liczb2;
  cout << "liczba 3: ";
  cin >> liczb3;
  suma = liczb1 + liczb2 + liczb3;
  srednia = suma / 3;
  cout << "suma: " << suma << " srednia: " << srednia;
}
#include <iostream>
using namespace std;

int main() {
  int a, b, h, i, pole;
  for(i = 0; i < 10; i++)
    {
      cout << "Podaj dlugosc pierwszego boku: ";
      cin >> a;
      cout << "Podaj dlugosc drugiego boku: ";
      cin >> b;
      cout << "Podaj dlugosc drugiego boku: ";
      cin >> h;
      pole = (a + b) * h / 2;
      cout << "Pole trapezu wynosi: " << pole << endl;
    cout << "----------------------------------------------" << endl;
    }
  return 0;
}
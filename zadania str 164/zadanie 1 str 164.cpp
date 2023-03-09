#include <iostream>
using namespace std;

int main() {
  int x, y, i, pole;
  for(i = 0; i < 5; i++)
    {
      cout << "Podaj dlugosc pierwszego boku: ";
      cin >> x;
      cout << "Podaj wysokosc: ";
      cin >> y;
      pole = x * y / 2;
      cout << "Pole trojkonta o boku: " << x << " i boku: " << y << " wynosi: " << pole << endl;
    }
  return 0;
}
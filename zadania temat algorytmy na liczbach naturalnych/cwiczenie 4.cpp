#include <iostream>
using namespace std;

int main(){ 
  int l_g, l_u, i, klasa;
  klasa = 1;
  for(i = 0; i < 5; i++)
    {
        cout << "Uczniowie klasy " << klasa << ": ";
        klasa = klasa + 1;
        cin >> l_u;
        if (l_u % 6)
        {
            l_g = l_u / 6;
            cout << "Liczba grup: " << l_g << endl;
        }
        else
        {
            cout << "Nie utworzono grup z wszystkich graczy" << endl;
        }
    }
  return 0;
}
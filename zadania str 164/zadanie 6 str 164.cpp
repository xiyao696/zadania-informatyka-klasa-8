#include <iostream>
using namespace std;

int pole_kwadratu (int a)
{
   return (a*a);
}

int obwod_kwadratu (int a)
{
   return (4*a);
}

int main()
{
   int bok_kwadratu;
   cout << "Podaj dlugosc boku: ";
   cin >> bok_kwadratu;
   cout << "Pole wynosi: " << pole_kwadratu(bok_kwadratu) << endl;
   cout << "Obwod wynosi: " << obwod_kwadratu(bok_kwadratu) << endl;
   return 0;
}
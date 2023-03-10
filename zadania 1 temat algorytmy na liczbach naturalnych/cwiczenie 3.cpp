#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Wartosc a: ";
    cin >> a;
    cout << "Wartosc b: ";    
    cin >> b;

    if (b == 0)
    {
        cout << "Wprowadzono dzielnik rowny zero";
    }
    else
    {
        if (a % b == 0)
        {
            cout << "a jest podzielna przez b";
        }
        else
        {
            cout << "a nie jest podzielne przez b";
        }
    }
}
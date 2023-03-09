#include <iostream>
using namespace std;

int main(){
    int a, b;
    cout << "Wartosc a: "; 
    cin >> a; //podanie wartosci a
    cout << "Wartosc b: "; 
    cin >> b; //podanie wartosci b
    if (a % b == 0) //jezeli a jest podzielne przez b i nie rowna sie 0 to:
    {
        cout << "a jest podzielna przez b"; //to
    }
    else
    {
        cout << "a nie jest podzielne przez b"; //w przeciwnym razie
    }
    
}
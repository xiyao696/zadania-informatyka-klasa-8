#include <iostream>
using namespace std;

int main(){
    unsigned int a, b;
    cout << "Podaj dwie liczby: " << endl ;
    cin >> a;
    cin >> b;
    
    while(a != b)
    {
        if (a > b)
            a = a - b;
        else
            b = b - a;
    }

    cout << "NWD = " << a << endl;
    return 0;
}
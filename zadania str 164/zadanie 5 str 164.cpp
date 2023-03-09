#include <iostream>
using namespace std;

void gwiazdki(){
   for (int i=0;i<15;i++)
       cout<<"*";
   cout<<endl;
}

int main()
{
   cout << "Gwiazdkowe pozdrowienia" << endl;
   gwiazdki();
   cout << "Wszystkiego najlepszego" << endl;
   gwiazdki();
   return 0;
}
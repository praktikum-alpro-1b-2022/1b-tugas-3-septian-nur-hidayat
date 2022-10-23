#include <iostream>
#include<conio.h>
using namespace std;

int main()
{
     cout << "Rumus Y = bx^2+0.5x-c" << endl;
     cout << "-------------------------------" << endl;
     {
          int b = 25, x = 10 , c = 15;
          float Y;
          cout << "Masukan b: ";
          cin >> b;
          cout << "Masukan x: ";
          cin >> x;
          cout << "Masukan c: ";
          cin >> c;
          Y = b*(x*x)+0.5*x - c;
          cout << "Y = " << Y << endl;
     }
     return 0;
}

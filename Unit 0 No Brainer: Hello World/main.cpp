//
//  main.cpp
//  Unit 0 No Brainer: Hello World
//
//  Created by Coleton Watt on 8/30/21.
//
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
     cout << "Hello World\n";
    cout << "Hello\n";
    int x = 4, y = 10, z = -1;

    cout <<(x + 2 ) * 5 + 1;
    cout << (x + 2 ) * (5 + 1);
    cout << y + x - 16 - z;
    cout << !(z+1);
    cout << -(x * z) % 2 + z;
    cout << x++ << " " << ++y;
    cout << x * z / y;
    cout << setprecision(3)<< 1.23456;
    cout << fixed << setprecision(3)<< 1.23456;
    cout  << setw(4) << 12
          << setw(4) << 12 << endl;
    cout  << setw(4) << 123
          << setw(4) << 123 << endl;
    cout  << setw(4) << 1234
    << setw(4) << 1234 << endl;


     return 0;
}

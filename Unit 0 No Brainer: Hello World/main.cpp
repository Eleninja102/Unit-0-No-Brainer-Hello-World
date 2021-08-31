#include <iostream>
#include <iostream>
#include <iomanip>
using namespace std;

int main() {
     cout << "Hello World\n";
    cout << "Hello\n";
    int x = 4, y = 10, z = -1;

    cout <<(x + 2 ) * 5 + 1<<endl;
    cout << (x + 2 ) * (5 + 1)<<endl;
    cout << y + x - 16 - z<<endl;
    cout << !(z+1)<<endl;
    cout << -(x * z) % 2 + z<<endl;
    cout << x++ << " " << ++y<<endl;
    cout << x * z / y<<endl;
    cout << setprecision(3)<< 1.23456<<endl;
    cout << fixed << setprecision(3)<< 1.23456<<endl;
    cout  << setw(4) << 12
          << setw(4) << 12 << endl;
    cout  << setw(4) << 123
          << setw(4) << 123 << endl;
    cout  << setw(4) << 1234
    << setw(4) << 1234 << endl;

int resultInt = 11 / 4;
int resultMod = 11 % 4;
float result = 11.0f / 4;
const double PI = 3.14159265359;


	cout << setw(7)<< "Type" << setw(8)<< "Result" << endl;
	cout << setw(7)<< "Int" << setw(8)<< resultInt << endl;
	cout << setw(7)<< "Mod" << setw(8)<< resultMod << endl;
	cout << setw(7)<< "Regular" << setw(8)<< result << endl;
	cout << setw(7)<< "PI" << setw(8)<< PI << endl;


     return 0;
}

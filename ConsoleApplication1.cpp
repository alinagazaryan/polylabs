 
#include <iostream>
#include <bitset>
using namespace std;
int main()
{
	// Nomer 1
	cout << "Gazaryan Alina Aleksandrovna,221-332" << endl;

	// Nomer 3 
	int c;
	cin >> c;
	cout << hex << c << dec << endl;
	cout << "bin: " << bitset<16>(int(c)) << endl;
	cout << "bool: " << (bool)c << endl; 
	cout << "char :" << (char)c << endl;
	cout << "double : " << (double)c << endl;
 
	// Nomer 4 
	cout << "Enter coeffs (a and b):" << endl;
	int a, b;
	double fo;
	cin >> a;
	cin >> b;
	cout << a << "*x = " << b << endl;
	cout << "x = " << b << "/" << a << endl;
	cout << "x = " << b / a << endl;
	fo = b / a;
	cout << "Result: " << fo << endl;

	// Nomer 5 
	cout << "Enter two points:" << endl;
	int x1, x2;
	cin >> x1;
	cin >> x2;
	double al;
	al = ((x2 + x1) / 2.);
	cout << "Center: " << al << endl;

	return 0;
}



 
#include <iostream>
#include <bitset>
using namespace std;
int main()
{
	// Nomer 1
	cout << "Gazaryan Alina Aleksandrovna,221-332" << endl << endl;

	// Nomer 2
	cout << "sizeof int = " << sizeof(int) << ", min:" << int(0b10000000000000000000000000000000) << " , max: " << int(0b01111111111111111111111111111111) << endl; 
	cout << "sizeof unsigned int = " << sizeof(unsigned int) << ", min: " << unsigned int(0) << ", max: " << unsigned int(0b11111111111111111111111111111111) << endl;
	cout << "sizeof short  = " << sizeof(short) << ", min: " << short(0b1000000000000000) << ", max: " << short(0b0111111111111111) << endl; 
	cout << "sizeof unsigned short = " << sizeof(unsigned short) << ", min: " << unsigned short(0) << ", max: " << unsigned short(0b1111111111111111) << endl;
	cout << "sizeof long = " << sizeof(long) << ", min: " << long(0b10000000000000000000000000000000) << ", max:" << long(0b01111111111111111111111111111111) << endl; 
	cout << "sizeof long long = " << sizeof(long long) << ", min: " << long long(0b1000000000000000000000000000000000000000000000000000000000000000) << ", max: " << long long(0b0111111111111111111111111111111111111111111111111111111111111111) << endl;
	cout << "sizeof double = " << sizeof(double) << ", min: " << double(0b1000000000000000000000000000000000000000000000000000000000000000) << ", max: " << double(0b0111111111111111111111111111111111111111111111111111111111111111) << endl;
	cout << "sizeof char = " << sizeof(char) << ", min: " << char(0b10000000) << ", max: " << char(0b01111111) << endl;
	cout << "sizeof bool = " << sizeof(bool) << ", min: " << bool(0) << ", max: " << bool(0b01111111) << endl << endl; 

	// Nomer 3 
	int c;
	cin >> c;
	cout << hex << c << dec << endl;
	cout << "bin: " << bitset<16>(int(c)) << endl;
	cout << "bool: " << (bool)c << endl; 
	cout << "char :" << (char)c << endl;
	cout << "double : " << (double)c << endl << endl;
 
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
	cout << "Result: " << fo << endl << endl;

	// Nomer 5 
	cout << "Enter two points:" << endl;
	int x1, x2;
	cin >> x1;
	cin >> x2;
	double al;
	al = ((x2 + x1) / 2.);
	cout << "Center: " << al << endl << endl;

	return 0;
}



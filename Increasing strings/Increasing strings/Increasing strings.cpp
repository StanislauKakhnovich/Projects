#include "..\..\std_lib_facilities.h"
int main()
{
	cout << "Enter three words.\n";
	string x1 = "???";
	string x2 = "???";
	string x3 = "???";
	cin >> x1 >> x2 >> x3;
	int count = 0;
	string y = "???";
	string z = "???";
	while (count < 2) {
		if (x1 > x2) {
			y = x1;
			z = x2;
			x1 = z;
			x2 = y;
		}
		if (x2 > x3) {
			y = x2;
			z = x3;
			x2 = z;
			x3 = y;
		}
		++count;
	}
	cout << x1 << ", " << x2 << ", " << x3;
}
#include "..\..\std_lib_facilities.h"
int main()
{
	cout << "Enter three integers.\n";
	int x1 = 0;
	int x2 = 0;
	int x3 = 0;
	cin >> x1 >> x2 >> x3;
	int count = 0;
	int y = 0;
	int z = 0;
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
#include "..\..\std_lib_facilities.h"
int main()
{
	cout << "Please enter two integers.\n";
	int val1 = 0;
	int val2 = 0;
	cin >> val1 >> val2;
	if (val1 < val2) 
		cout << "The smallest value is " << val1<<".\n"
			 << "The highest value is " << val2 << ".\n";
	if (val1 > val2)
		cout << "The smallest value is " << val2 << ".\n"
			 << "The highest value is " << val1 << ".\n";
	if (val1 == val2) cout << "The values ​​are equal.\n";
	cout << "The sum of these numbers is " << val1 + val2 << ".\n"
		<< "The difference between these numbers is " << val1 - val2 << ".\n"
		<< "Multiplying these numbers equals " << val1 * val2 << ".\n"
		<< "The division of these numbers is " << val1/val2 << ".\n";
	
}
#include "..\..\std_lib_facilities.h"
int main()
{
	cout << "Enter integer.\n";
	int number = 0;
	cin >> number;
	if (number%2 == 0) 
		cout << "The number "<< number << " is even.\n";
	if (number % 2 != 0)
		cout << "The number " << number << " is odd.\n";
}
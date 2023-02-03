#include "..\..\std_lib_facilities.h"
int main()
{
	cout << "Please enter the distance in miles.\n";
	double miles = 0;
	cin >> miles;
	cout << "You entered "<<miles*1.609<<" kilometers.\n";
}
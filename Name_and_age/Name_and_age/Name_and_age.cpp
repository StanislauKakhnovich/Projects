#include "..\..\std_lib_facilities.h"
int main()
{
	cout << "Please enter your name and age.\n";
	string first_name = "????";
	double age = -1;
	cin >> first_name >> age;
	cout << "Hi, " << first_name << " (age " << age*12 << " months).\n";
}
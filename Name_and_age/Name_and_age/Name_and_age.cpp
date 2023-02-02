#include "..\..\std_lib_facilities.h"
int main()
{
	cout << "Pozaluista, vvedite svoe ima i vozrast\n";
	string first_name = "????";
	double age = -1;
	cin >> first_name >> age;
	cout << "Hi, " << first_name << "(age " << age*12 << ")\n";
}
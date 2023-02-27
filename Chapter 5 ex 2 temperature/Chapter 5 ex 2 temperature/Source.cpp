#include "..\..\std_lib_facilities.h"
double ctok(double c)
{
	double k = c + 273.15;
	return k;
}

int main()
{
	cout << "Enter a temperature value in Celsius.\n";
	double c = 0;
	cin >> c;
	while (c < -273.15) {
		cout << "You have entered a temperature value below absolute zero. Enter a temperature equal to or higher than -273.15.\n";
		cin >> c;
	}
	double k = ctok(c);
	cout << "The Celsius temperature you entered is " << k << " Kelvin." << '\n';

}
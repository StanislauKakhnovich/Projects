#include "..\..\std_lib_facilities.h"
int main()
{
	double enter_number = 0;
	double min_number = 0;
	double max_number = 0;
	string units = " ";
	int i = 0;
	double total = 0;
	while (true) {
		cout << "Please enter a number with one of the units: m, in, cm, ft.\n";
		cin >> enter_number >> units;
		if (units == "|") break;
		 if (units == "cm" || units == "m" || units == "in" || units == "ft"){
			if (i == 0) {
				min_number = enter_number;
				max_number = enter_number;
				
			}
			else if (i > 0 && enter_number < min_number) {
				
				min_number = enter_number;
			}
			else if (i > 0 && enter_number > max_number) {
				
				max_number = enter_number;
			}
			++i;
			if (units == "cm") total += enter_number / 100;
			else if (units == "in") total +=  enter_number * 2.54 / 100;
			else if (units == "ft") total += enter_number * 12 * 2.54 / 100;
			else if (units == "m") total +=  enter_number;
		 }
		 else cout << "You entered the wrong unit of measure.\n";

	}
	cout << "The smallest among the introduced " << min_number << 'm' << '\n';
	cout << "The largest among the introduced " << max_number << 'm' << '\n';
	cout << "The number of entered values " << i << '\n';
	cout << "Total amount of entered values: " << total << 'm' << '\n';
	
}
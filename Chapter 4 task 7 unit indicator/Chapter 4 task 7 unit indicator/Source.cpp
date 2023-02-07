#include "..\..\std_lib_facilities.h"
int main()
{
	double enter_number = 0;
	double min_number = 0;
	double max_number = 0;
	string units = " ";
	int i = 0;
	while (true) {
		cout << "Please enter number.\n";
		cin >> enter_number >> units;
		 if (units == "cm" || units == "m" || units == "in" || units == "ft"){
			if (i == 0) {
				min_number = enter_number;
				max_number = enter_number;
				++i;
			}
			else if (i > 0 && enter_number < min_number) {
				cout << "The smallest among the introduced " << enter_number << units << '\n';
				min_number = enter_number;
			}
			else if (i > 0 && enter_number > max_number) {
				cout << "The largest among the introduced " << enter_number << units << '\n';
				max_number = enter_number;
			}
		 }
		 else cout << "You entered the wrong unit of measure.\n";

	}
}
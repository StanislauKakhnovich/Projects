#include "..\..\std_lib_facilities.h"
int main()
{
	double enter_number = 0;
	double min_number = 0;
	double max_number = 0;
	string units = " ";
	int i = 0;
	vector<double> distances;
	while (true) {
		cout << "Please enter a number with one of the units: m, in, cm, ft.\n";
		cin >> enter_number >> units;
		if (units == "|") break;
		if (units == "cm" || units == "m" || units == "in" || units == "ft") {
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
			if (units == "cm") distances.push_back(enter_number / 100);
			else if (units == "in") distances.push_back(enter_number * 2.54 / 100);
			else if (units == "ft") distances.push_back(enter_number * 12 * 2.54 / 100);
			else if (units == "m") distances.push_back(enter_number);
		}
		else cout << "You entered the wrong unit of measure.\n";

	}
	sort(distances);
	cout << "The smallest among the introduced " << distances[0] << 'm' << '\n';
	cout << "The largest among the introduced " << distances[distances.size()-1] << 'm' << '\n';
	cout << "The number of entered values " << i << '\n';
	for(double length:distances) cout<<"Length = " << length << 'm' << '\n';
	
	
}
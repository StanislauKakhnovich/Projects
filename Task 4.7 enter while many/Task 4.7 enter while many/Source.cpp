#include "..\..\std_lib_facilities.h"
int main()
{
	
	double enter_number = 0;
	double min_number = 0;
	double max_number = 0;
	int i = 0;
	while (true) {
		cout << "Please enter number.\n";
		cin >> enter_number;
		if (i == 0) {
			min_number = enter_number;
			max_number = enter_number;
			++i;
		}
		else if (i > 0 && enter_number < min_number) {
			cout << "The smallest among the introduced " << enter_number << '\n';
			min_number = enter_number;
		}
		else if (i > 0 && enter_number > max_number) {
			cout << "The largest among the introduced " << enter_number << '\n';
			max_number = enter_number;
		}
	}
	


	/*
	vector<double> numbers;
	while (cin >> enter_number && numbers.size() < 3)
		numbers.push_back(enter_number);
	double control = (numbers[0] - numbers[1]) * (numbers[0] - numbers[1]);
	if (control < (1.0 / 100) * (1.0 / 100) && control != 0) cout << "The numbers are almost equal.\n";
	else if (numbers[0] < numbers[1])
		cout << "The smallest value is " << numbers[0] << ".\n"
		<< "The highest value is " << numbers[1] << ".\n";
	else if (numbers[0] > numbers[1])
		cout << "The smallest value is " << numbers[1] << ".\n"
		<< "The highest value is " << numbers[0] << ".\n";
	else if (numbers[0] == numbers[1]) cout << "The numbers are equal.\n";
	*/
}
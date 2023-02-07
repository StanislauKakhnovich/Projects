#include "..\..\std_lib_facilities.h"
int main()
{
	cout << "Please enter two numbers.\n";
	double enter_number = 0;
	vector<double> numbers;
	while (cin >> enter_number && numbers.size()<3)
		numbers.push_back(enter_number);
	double control = (numbers[0] - numbers[1]) * (numbers[0] - numbers[1]);
	if (control <(1.0/100)*(1.0 / 100) && control!=0) cout << "The numbers are almost equal.\n";
	else if (numbers[0] < numbers[1])
		cout << "The smallest value is " << numbers[0] << ".\n"
		<< "The highest value is " << numbers[1] << ".\n";
	else if (numbers[0] > numbers[1])
		cout << "The smallest value is " << numbers[1] << ".\n"
		<< "The highest value is " << numbers[0] << ".\n";
	else if (numbers[0] == numbers[1]) cout << "The numbers are equal.\n";
}
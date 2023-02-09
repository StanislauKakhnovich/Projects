#include "..\..\std_lib_facilities.h"
int main()
{
	cout << "Enter the operator (+,-,*,/) and two numbers.\n";
	string operation = "?";
	double num1 = 0;
	double num2 = 0;
	cin >> operation >> num1 >> num2;
	if (operation == "+") cout << "Adding of " << num1 << " and " << num2 << " is " << num1 + num2;
	else if (operation == "-") cout << "Subtracting of " << num1 << " by " << num2 << " is " << num1 - num2;
	else if (operation == "*") cout << "Multiplying of " << num1 << " by " << num2 << " is " << num1 * num2;
	else if (operation == "/") cout << "Dividing of " << num1 << " by " << num2 << " is " << num1 / num2;
}
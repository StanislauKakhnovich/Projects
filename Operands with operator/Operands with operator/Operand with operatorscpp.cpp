#include "..\..\std_lib_facilities.h"
int main()
{
	cout << "Enter the operator (+,-,*,/) and two numbers.\n";
	string operation = "?";
	double num1 = 0;
	double num2 = 0;
	cin >> operation >> num1 >> num2;
	if (operation == "+") cout << num1 + num2;
	if (operation == "-") cout << num1 - num2;
	if (operation == "*") cout << num1 * num2;
	if (operation == "/") cout << num1 / num2;
}
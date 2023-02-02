#include "..\..\std_lib_facilities.h"
int main()
{
	cout << "Please enter a floating point value.\n";
	int n;
	cin >> n;
	cout << "n == " << n
		<< "\nn+1 == " << n + 1
		<< "\nthree times for n == " << 3 * n
		<< "\ntwice for n == " << 2 * n
		<< "\nn squared == " << n * n
		<< "\nhalf n == " << n / 2
		<< "\nsquare root of n == " << sqrt(n)
		<< '\n';
}
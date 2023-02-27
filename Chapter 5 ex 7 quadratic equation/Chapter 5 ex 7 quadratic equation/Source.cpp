#include "..\..\std_lib_facilities.h"
int main()
{
	cout << "To solve a quadratic equation like ax2 + bx + c = 0, enter a, b, c.\n";
	double a = 0;
	double b = 0;
	double c = 0;
	cin >> a >> b >> c;
	double discrim = b * b - 4 * a * c;
	cout << "The discriminant is " << discrim << '\n';
	if (discrim > 0)
		cout << "x1 = " << (-b + sqrt(discrim) / 2 * a) << '\n'
		<< "x2 = " << (-b - sqrt(discrim) / 2 * a) << '\n';
	else if (discrim == 0) cout << "x = " << -b / 2 * a << '\n';
	else if (discrim < 0) cout << "There are no real roots.\n";


}
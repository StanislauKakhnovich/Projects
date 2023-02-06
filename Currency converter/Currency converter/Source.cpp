#include "..\..\std_lib_facilities.h"
int main()
{	
	constexpr double rate_hryvnia = 0.027;
	constexpr double rate_bel_rubl = 0.39;
	constexpr double rate_yuan = 0.15;
	double money = 0;
	char valuta = ' ';
	cout << "Please enter the amount of money and the name of the currency(h, r, y).\n";
	cin >> money >> valuta;
	if (valuta == 'h') cout << money << " hryvnia = " << money * rate_hryvnia << " dollars.";
	else if (valuta == 'r') cout << money << " bel. rub. = " << money * rate_bel_rubl << " dollars.";
	else if (valuta == 'y') cout << money << " yuan = " << money * rate_yuan << " dollars.";
	else cout << "I do not know such a currency.";

}
#include "..\..\std_lib_facilities.h"
int main()
{
	constexpr double rate_hryvnia = 0.027;
	constexpr double rate_bel_rubl = 0.39;
	constexpr double rate_yuan = 0.15;
	constexpr double rate_euro = 1.08;
	constexpr double rate_gbp = 1.20;
	double money = 0;
	char valuta = ' ';
	cout << "Please enter the amount of money and the name of the currency(h, r, y, e, p).\n";
	cin >> money >> valuta;
	switch (valuta) {
	case 'h': 
		cout << money << " hryvnia = " << money * rate_hryvnia << " dollars.";
		break;
	case 'r': 
		cout << money << " bel. rub. = " << money * rate_bel_rubl << " dollars.";
		break;
	case 'y': 
		cout << money << " yuan = " << money * rate_yuan << " dollars.";
		break;
	case 'e':
		cout << money << " euro = " << money * rate_euro << " dollars.";
		break;
	case 'p':
		cout << money << " GBP = " << money * rate_gbp << " dollars.";
		break;
	default:
		cout << "I do not know such a currency.";
		break;

	}
}
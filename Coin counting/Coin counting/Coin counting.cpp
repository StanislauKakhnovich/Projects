#include "..\..\std_lib_facilities.h"
int main()
{
	cout << "How many 1- cent coins do you have ? .\n";
	int cent_1 = 0;
	cin >> cent_1;
	cout << "How many 5- cent coins do you have ? .\n";
	int cent_5 = 0;
	cin >> cent_5;
	cout << "How many 10- cent coins do you have ? .\n";
	int cent_10 = 0;
	cin >> cent_10;
	cout << "How many 25- cent coins do you have ? .\n";
	int cent_25 = 0;
	cin >> cent_25;
	cout << "How many 50- cent coins do you have ? .\n";
	int cent_50 = 0;
	cin >> cent_50;
	if (cent_1 == 1) cout << "You have " << cent_1 << " 1- cent coin.\n";
	if (cent_1 > 1) cout << "You have " << cent_1 << " 1- cent coins.\n";
	if (cent_5 == 1) cout << "You have " << cent_5 << " 5- cent coin.\n";
	if (cent_5 > 1) cout << "You have " << cent_5 << " 5- cent coins.\n";
	if (cent_10 == 1) cout << "You have " << cent_10 << " 10- cent coin.\n";
	if (cent_10 > 1) cout << "You have " << cent_10 << " 10- cent coins.\n";
	if (cent_25 == 1) cout << "You have " << cent_25 << " 25- cent coin.\n";
	if (cent_25 > 1) cout << "You have " << cent_25 << " 25- cent coins.\n";
	if (cent_50 == 1) cout << "You have " << cent_50 << " 50- cent coin.\n";
	if (cent_50 > 1) cout << "You have " << cent_50 << " 50- cent coins.\n";
	int total = cent_1 * 1 + cent_5 * 5 + cent_10 * 10 + cent_25 * 25 + cent_50 * 50;
	if (total <100) cout << "The total value of your coins is "<<total<<" cents.\n";
	if (total >=100) cout << "The total value of your coins is " << total/100 << " dollars "<< total%100 << " cents.\n";

}
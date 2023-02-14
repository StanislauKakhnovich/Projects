#include "..\..\std_lib_facilities.h"
int main()
{
	cout << "Enter the number n.\n";
	int num = 0;
	cin >> num;
	vector<int>primes = { 2 };
	int i = 3;
	while ( primes.size( ) < num) {
		bool control = true;
		for (int j = 2; j < i; ++j) {
			if (i % j == 0) control = false;
		}
		if (control) primes.push_back(i);
		++i;
	}
	for (int x : primes) cout << x << '\n';

}
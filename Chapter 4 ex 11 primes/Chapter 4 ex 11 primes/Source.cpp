#include "..\..\std_lib_facilities.h"
int main()
{
	vector<int>primes = { 2 };
	
	for (int i = 3; i <= 100; ++i) {
		bool control = true;
		for (int j = 2; j < i; ++j) {
			if (i % j == 0) control = false;
		}
		if (control) primes.push_back(i);
	}
	for (int x : primes) cout << x << '\n';

}
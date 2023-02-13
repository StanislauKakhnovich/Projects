#include "..\..\std_lib_facilities.h"

int main()
{

	vector<int> etalon;
	vector<int> sieve;
	for (int i = 2; i <= 100; ++i) {
		etalon.push_back(i);
		sieve.push_back(i);
	}
	int p = etalon[0];

	while (p * p < etalon[etalon.size()-1]) {
			for (int i = 1; i < etalon.size(); ++i) {
				if (etalon[i]!=p && etalon[i] % p == 0) sieve[i] = 0;
			}
			++p;
	}
	vector<int> primes;
	for (int x : sieve) if (x != 0) primes.push_back(x);
	for (int x : primes) cout << x << '\n';
	
}
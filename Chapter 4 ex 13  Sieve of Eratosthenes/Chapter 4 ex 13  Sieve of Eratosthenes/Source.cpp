#include "..\..\std_lib_facilities.h"

int main()
{
	cout << "Enter the maximum number.\n";
	int max_num = 0;
	cin >> max_num;
	vector<int> etalon;
	vector<int> sieve;
	for (int i = 2; i <= max_num; ++i) {
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
#include "..\..\std_lib_facilities.h"

int main()
{
	vector<int> sequence;
	for (int i = 2; i < 100; ++i) {
		sequence.push_back(i);
	}
	int p = sequence[0];
	int count = 0;
	//cout << sequence[sequence.size() - 1];
	
	while (p * p < sequence[sequence.size()-1]) {
		++count;
		cout << p << " " << count << '\n';
		if (sequence[count] != 0) {
			for (int i = count; i < sequence.size(); ++i) {
				if (sequence[i] % p == 0) sequence[i] = 0;
			}
		}
		
		
		
		p = sequence[count];
		
		
	}
	//cout << count;
	//for (int x : sequence) cout << x << '\n';
	
	/*
	vector<int> primes;
	for (int x : sequence) if (x != 0) primes.push_back(x);
	for (int x : primes) cout << x << '\n';
	*/
}
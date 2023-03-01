#include "..\..\std_lib_facilities.h"
int main()
{
	int Fprev0 = 0;
	int Fprev1 = 1;
	int Fpres = 2;
	while (Fprev1 < Fpres) {
		Fprev0 = Fprev1;
		Fprev1 = Fpres;
		Fpres = Fprev0 + Fprev1;
	}
	int max_fib = Fprev1;
	cout << max_fib << '\n';

}
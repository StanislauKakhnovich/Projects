#include "..\..\std_lib_facilities.h"
int main()
{
	string previous = "x";
	string current;
	while (cin >> current) {
		if (previous == current)
			cout << "Repeat word: " << current << '\n';
		previous = current;
	}
}
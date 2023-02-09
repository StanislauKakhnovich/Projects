#include "..\..\std_lib_facilities.h"
int main()
{
	int start = 0;
	int end = 100;
	int median = 50;
	string answer = "";
	for (int i = 0; i < 7; ++i) {
		cout << "Did you guess a number less than or equal to " << median << "? y/n?\n";
		cin >> answer;
		if (answer == "y") {
			end = median;
			median = (end - start) / 2 + start;
		}
		else {
			start = median;
			median = (end - start) / 2 + start;
		}
	}
	//cout << start << '\t' << end;
	cout << "The hidden number is " << end << '\n';
	
}
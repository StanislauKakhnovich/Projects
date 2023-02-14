#include "..\..\std_lib_facilities.h"
int main()
{
	vector<int> seq;
	cout << "Enter a sequence of numbers.\n";
	for (int num; cin >> num;) seq.push_back(num);
	sort(seq);
	bool marker = true;
	while (seq.size() > 1 && marker) {
		vector<int> control;
		for (int i = 1; i < seq.size(); ++i)
			if (seq[i] == seq[i - 1]) control.push_back(seq[i]);
		if (control.size() == 0) marker = false;
		else seq = control;
	}

	cout << "The mode of the sequence of numbers is " << seq[0] << '\n';

}
#include "..\..\std_lib_facilities.h"
int main()
{
	vector<string> seq;
	cout << "Enter a sequence of words.\n";
	for (string word; cin >> word;) seq.push_back(word);
	sort(seq);
	string min_word = seq[0];
	string max_word = seq[seq.size() - 1];
	bool marker = true;
	while (seq.size() > 1 && marker) {
		vector<string> control;
		for (int i = 1; i < seq.size(); ++i)
			if (seq[i] == seq[i - 1]) control.push_back(seq[i]);
		if (control.size() == 0) marker = false;
		else seq = control;
	}

	cout << "The smallest word in the sequence is " << min_word << ".\n"
		<< "The largest word in the sequence is " << max_word << ".\n"
		<<"The mode of the sequence of words is " << seq[0] << '\n';

}
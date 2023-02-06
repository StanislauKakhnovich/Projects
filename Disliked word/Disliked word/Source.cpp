#include "..\..\std_lib_facilities.h"
int main()
{
	vector<string> words;
	string disliked = "Broccoli";
	string disliked1 = "Gang";
	for (string word; cin >> word;) 
		words.push_back(word);
	for (int i = 0; i < words.size(); ++i) {
		if (words[i] == disliked) words[i] = "BLEEP";
		if (words[i] == disliked1) words[i] = "BLEEP";
		if (i == 0 || words[i - 1] != words[i] || words[i]=="BLEEP")
			cout << words[i] << '\n';
	}
}
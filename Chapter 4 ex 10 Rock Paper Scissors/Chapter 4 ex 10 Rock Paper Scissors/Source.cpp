#include "..\..\std_lib_facilities.h"
int main()
{
	vector<string> comps = { "stone", "paper", "scissors" };
	string user = "?";
	int comp = 0;
	while (true) {
		cout << "Enter stone, paper or scissors.\n";
		cin >> user;
		cout << "The computer threw out " << comps[comp]<<".\n";
		if (user == comps[comp]) cout << "Draw.\n";
		else if (user == "stone" && comps[comp] == "paper") cout << "The computer won.\n";
		else if (user == "stone" && comps[comp] == "scissors") cout << "You have won.\n";
		else if (user == "paper" && comps[comp] == "stone") cout << "You have won.\n";
		else if (user == "paper" && comps[comp] == "scissors") cout << "The computer won.\n";
		else if (user == "scissors" && comps[comp] == "stone") cout << "The computer won.\n";
		else if (user == "scissors" && comps[comp] == "paper") cout << "You have won.\n";
		++comp;
		if (comp == 3) comp = 0;
		if (user == "|") break;
	}


}
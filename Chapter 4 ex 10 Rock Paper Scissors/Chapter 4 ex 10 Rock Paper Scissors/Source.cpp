#include "..\..\std_lib_facilities.h"
int main()
{
	vector<string> answers = { "stone", "paper", "scissors" };
	string user = "?";
	int comp_index = 0;
	while (true) {
		cout << "Enter stone, paper or scissors.\n";
		cin >> user;
		int user_index = 0;
		for (int i = 0; i < 3; ++i) if (answers[i] == user) user_index = i;
		cout << "The computer threw out " << answers[comp_index]<<".\n";
		switch (user_index) {
			case 0: {
				switch (comp_index) {
				case 0: cout << "Draw.\n";
					break;
				case 1: cout << "The computer won.\n";
					break;
				case 2: cout << "You have won.\n";
					break;
				}
				break;
			}
			case 1: {
				switch (comp_index) {
				case 0: cout << "You have won.\n";
					break;
				case 1: cout << "Draw.\n";
					break;
				case 2: cout << "The computer won.\n";
					break;
				}
				break;
			}
			case 2: {
				switch (comp_index) {
				case 0: cout << "The computer won.\n";
					break;
				case 1: cout << "You have won.\n";
					break;
				case 2: cout << "Draw.\n";
					break;
				}
				break;
			}
		}
		++comp_index;
		if (comp_index == 3) comp_index = 0;
		if (user == "|") break;
	}


}
#include "..\..\std_lib_facilities.h"
int main()
{
	vector<string> hidden_number = { "1", "4", "3", "2" };
	int bull = 0;
	while (bull != 4) {
		bull = 0;
		cout << "Enter a four - digit number.\n";
		string num_user = "    ";
		cin >> num_user;
		string x = "";
		vector<string> users;
		for (int i = 0; i < 4; ++i) {
			x = num_user[i];
			users.push_back(x);
		}

		vector<string> control_cows;
		for (int i = 0; i < 4; ++i) {
			if (users[i] == hidden_number[i]) ++bull;
			else control_cows.push_back(hidden_number[i]);
		}
		int cow = 0;
		for (int i = 0; i < control_cows.size(); ++i) {
			for (int j = 0; j < 4; ++j) {
				if (control_cows[i] == users[j]) ++cow;
			}
		}
		cout << bull << " bulls " << cow << " cows \n";
	}
}
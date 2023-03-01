#include "..\..\std_lib_facilities.h"
int main()
{
	vector<int> hidden_number = { 1, 4, 3, 2 };
	int bull = 0;
	while (bull != 4) {
		bull = 0;
		cout << "Enter a four - digit number.\n";
		int num_user = 0;
		cin >> num_user;
		int x = 0;
		int num0 = num_user / 1000;
		int num1 = num_user % 1000 / 100;
		vector<int> users = { 
			num_user / 1000, 
			num_user % 1000 / 100,
			num_user % 100 / 10,
			num_user % 10
		};
		vector<int> control_cows;
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
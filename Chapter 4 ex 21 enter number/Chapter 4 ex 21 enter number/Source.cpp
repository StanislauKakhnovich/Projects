#include "..\..\std_lib_facilities.h"
int main()
{
	vector<string> names;
	vector<int> points;
	string name = "?";
	int point = 1;

	while (name != "NoName" && point != 0) {
		bool control = true;
		cout << "Enter name and points.\n";
		cin >> name >> point;
		for (int i = 0; i < names.size(); ++i) {
			if (name == names[i]) {
				control = false;
				cout << "This name is already in the list.\n";
			}
		}
		if (name != "NoName" && point != 0 && control) {
			names.push_back(name);
			points.push_back(point);
		}
	}
	//for (int i = 0; i < names.size(); ++i) cout << names[i] << " " << points[i] << '\n';
	cout << "Enter points.\n";
	int enter_points = 0;
	cin >> enter_points;
	bool control = true;
	for (int i = 0; i < points.size(); ++i) {
		if (enter_points == points[i]) {
			control = false;
			cout << names[i] <<'\n';
		}
	}
	if (control) cout << "Points not found.\n";

}
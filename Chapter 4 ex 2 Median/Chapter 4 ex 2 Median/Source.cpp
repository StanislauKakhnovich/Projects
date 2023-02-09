#include "..\..\std_lib_facilities.h"
int main()
{
	cout << "Enter temperature.\n";
	vector<double> temps;
	for (double temp; cin >> temp;)  temps.push_back(temp);
	sort(temps);
	cout <<"The median value is "<< (temps[(temps.size()-1)] - temps[0])/2;

}
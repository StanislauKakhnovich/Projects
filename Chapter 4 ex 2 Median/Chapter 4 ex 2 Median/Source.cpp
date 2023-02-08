#include "..\..\std_lib_facilities.h"
int main()
{
	cout << "Enter temperature.\n";
	vector<double> temps;
	for (double temp; cin >> temp;)  temps.push_back(temp);
	sort(temps);
	//cout << temps[1];
	//int end_vector = 0;
		//end_vector = temps.size();
	//cout << end_vector;
		//cout << temps[end_vector];
	//double median = (temps[end_vector] - temps[0]) / 2;
	double end_vector = 0;
	end_vector = temps[temps.size()];
	double begin_vector = 0;
	begin_vector = temps[0];
	double median = (end_vector - begin_vector) / 2;
		cout << median;
	//cout << "Median temperature " << median;

}
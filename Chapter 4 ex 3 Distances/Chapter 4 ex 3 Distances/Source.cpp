#include "..\..\std_lib_facilities.h"
int main()
{
	cout << "Enter distances between two cities.\n";
	vector<double> distances;
	double total = 0;
	for (double dist; cin >> dist;) {
		distances.push_back(dist);
		total += dist;
	}
	sort(distances);
	cout << "Total distance " << total <<"km.\n";
	cout << "The smallest distance " << distances[0] << "km.\n";
	cout << "The largest distance " << distances[distances.size()-1] << "km.\n";
	cout << "The average distance " << total/ distances.size() << "km.\n";
}
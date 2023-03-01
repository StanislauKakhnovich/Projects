#include "..\..\std_lib_facilities.h"
int main()
{
	cout << "Enter the number of values to sum:\n";
	double N = 0;
	cin >> N;
	cout << "Enter multiple number (| to end input).\n";
	vector<double> numbers;
	for (double num; cin >> num;) numbers.push_back(num);

	if (N > numbers.size()) cout << "You are asking to sum more numbers than you entered.\n";
	double sum = 0;
	for (int i = 0; i < N; ++i) sum += numbers[i];
	vector<double> differences;
	for (int i = 0; i < numbers.size() - 1; ++i) differences.push_back(numbers[i] - numbers[i + 1]);
	cout << "The sum of the first " << N << " numbers is: " << sum << '\n';
	for (double x : differences) cout << x << '\n';

}
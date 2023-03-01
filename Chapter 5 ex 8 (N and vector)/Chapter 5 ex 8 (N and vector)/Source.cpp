#include "..\..\std_lib_facilities.h"
int main()
{
	cout << "Enter the number of values to sum:\n";
	int N = 0;
	cin >> N;
	cout << "Enter multiple integers (| to end input).\n";
	vector<int> numbers;
	for (double num; cin >> num;)
	{
		int check = num;
		if (check != num) cout << "The result cannot be represented as an int.\n";
		numbers.push_back(num);
	}
		
	if (N > numbers.size()) cout << "You are asking to sum more numbers than you entered.\n";
	int sum = 0;
	for (int i = 0; i < N; ++i) sum += numbers[i];
	cout << "The sum of the first " << N << " numbers is: " << sum << '\n';


}
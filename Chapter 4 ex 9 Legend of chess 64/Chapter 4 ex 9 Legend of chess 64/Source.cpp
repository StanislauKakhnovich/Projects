#include "..\..\std_lib_facilities.h"

int main()
{
	double total_rice = 0;
	int cell_number = 1;
	double rice_on_cell = 1;
	while (cell_number <= 64) {
		cout << "The current cell number " << cell_number << ". "
			<< "The number of grains of rice in the current cell " << rice_on_cell << ". "
			<< "The total number of grains of rice in the previous cells " << total_rice << ".\n";
		total_rice += rice_on_cell;
		rice_on_cell *= 2;
		++cell_number;

	}
	cout << "The total number of grains of rice on 64 cells " << total_rice << ".\n";
}
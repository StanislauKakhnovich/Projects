#include "..\..\std_lib_facilities.h"

int main()
{
	int total_rice = 0;
	int cell_number = 1;
	int rice_on_cell = 1;
	int cell_thousand = 0;
	int control_thousand = true;
	int cell_million = 0;
	int control_million = true;
	int cell_billion = 0;
	int control_billion = true;
	while (control_billion) {
		cout << "The current cell number " << cell_number << ". "
			<< "The number of grains of rice in the current cell " << rice_on_cell << ". "
			<< "The total number of grains of rice in the previous cells " << total_rice << ".\n";
		total_rice += rice_on_cell;
		rice_on_cell *= 2;
		++cell_number;
		if (total_rice >= 1000 && control_thousand) {
			cell_thousand = cell_number;
			control_thousand = false;
		}
		else if (total_rice >= 1000000 && control_million) {
			cell_million = cell_number;
			control_million = false;
		}
		else if (total_rice >= 1000000000 && control_billion) {
			cell_billion = cell_number;
			control_billion = false;
		}

	}
	cout << "The number of cells to obtain 1000 grains of rice " << cell_thousand << ".\n"
		<< "The number of cells to obtain 1000000 grains of rice " << cell_million << ".\n"
		<< "The number of cells to obtain 1000000000 grains of rice " << cell_billion << ".\n";
}
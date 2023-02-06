#include "..\..\std_lib_facilities.h"
int main()
{
	for (int i = 48; i < 123; ++i) {
		if (i>=48 && i<=57) cout << char(i) << '\t' << i << '\n';
		else if (i >= 65 && i <= 90) cout << char(i) << '\t' << i << '\n';
		else if (i>96) cout << char(i) << '\t' << i << '\n';
		
	}
}
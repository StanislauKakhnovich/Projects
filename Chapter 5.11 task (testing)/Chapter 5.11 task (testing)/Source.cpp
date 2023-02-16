#include "..\..\std_lib_facilities.h"

int main()
{
	try {
		bool c = true;
		if (c) cout << "Success ! \n"; else cout << "Fail ! \n";
		keep_window_open();
		return 0;
	}
	catch (exception& e) {
		cerr << "Error: " << e.what() << '\n';
		keep_window_open();
		return 1;
	}
	catch (...) {
		cerr << "Unknown exception! \n";
		keep_window_open();
		return 2;
	}
}
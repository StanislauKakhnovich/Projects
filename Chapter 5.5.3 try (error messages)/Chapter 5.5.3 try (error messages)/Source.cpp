#include "..\..\std_lib_facilities.h"
int area(int length, int width) {
	if (length <= 0 || width <= 0) return -1;
	return length * width;
}
int framed_area(int x, int y) {
	constexpr int frame_width = 2;
	if (x - frame_width <= 0 || y - frame_width <= 0)
		error("A non - positive argument to the area() function"
			" when called from within the framed_area() function.");
	return area(x - frame_width, y - frame_width);
}
int f(int x, int y, int z) {
	int area1 = area(x, y);
	
	if (area1 <= 0) error("Non-positive area");
	int area2 = framed_area(1, z);
	int area3 = framed_area(y, z);
	double ratio = double(area1) / area3;
	
	cout << "area1 = " << area1 << " area2 = " << area2
		<< " area3 = " << area3 << " ratio = " << ratio << '\n';
	return 0;
	
	
}
int main()
{
	cout << "Enter x, y, z\n";
	int x;
	int y;
	int z;
	cin >> x >> y >> z;
	f(x, y, z);


}
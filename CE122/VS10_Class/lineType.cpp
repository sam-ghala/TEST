#include <iostream>
#include "inputs.h"
#include "lineType.h"
using namespace std;

int main()
{
	double x, y;
	lineType line1(a, b, c);
	lineType line2(d, e, f);
	lineType line3(g, h, i);

	cout << "Line 1: ";
	line1.display();

	if (line1.isParallel(line2)) cout << "line1 is parallel to line 2" << endl;
	if (line1.isPerp(line3)) cout << "line 1 is perpendicular to line 3" << endl;

	if (line2.intersect(line3, x, y))
		cout << "The intersection of lines 2 and 3 is at point(" << x << ", " << y << ")" << endl;
	else
		cout << "Lines 2 and 3 do not intersect." << endl;

	return 0;
}

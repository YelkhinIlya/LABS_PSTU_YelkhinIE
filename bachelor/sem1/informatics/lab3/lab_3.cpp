#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double e = pow(10, -4);
	double sum = 0, curx = 1, cure = 1, y = 0;
	int ne = 1;
	for (double x = 0.1; x <= 0.8; x += 0.07) {
		sum = 0;
		curx = 1;
		for (int n = 1; n < 41; n++) {
			curx *= x;
			sum += curx * sin(n * 3.141592653589793238 / 4);
		}
		cout << "X = " << x << " SN = " << sum;
		curx = x;
		ne = 1;
		cure = x * sin(ne * 3.141592653589793238 / 4);
		sum = cure;
		while (abs(cure) > e) {
			curx *= x;
			ne++;
			cure = curx * sin(ne * 3.141592653589793238 / 4);
			sum += cure;
		}
		cout << " SE = " << sum;
		y = x * sin(3.141592653589793238 / 4) / (1 - 2 * x * cos(3.141592653589793238 / 4) + pow(x, 2));
		cout << " Y = " << y << endl;
	}
}
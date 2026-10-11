#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a=100;
	float b = 0.001,c1,c2,c3,c4,c5,c6,c7,c8,c9;
	c1 = pow(a + b, 4);
	c2 = pow(a, 4);
	c3 = 4 * pow(a, 3) * b;
	c4 = 6 * pow(a, 2) * pow(b, 2);
	c5 = c1 - c2 - c3 - c4;
	c6 = 4 * pow(b, 3) * a;
	c7 = pow(b, 4);
	c8 = c6 + c7;
	c9 = c5 / c8;
	cout << "Результат при использовании типа данных float для вычислений: " << c9 << "\n";
	double d1, d2, d3, d4, d5, d6, d7,d8,d9;
	d1 = pow(a + b, 4);
	d2 = pow(a, 4);
	d3 = 4 * pow(a, 3) * b;
	d4 = 6 * pow(a, 2) * pow(b, 2);
	d5 = d1 - d2 - d3 - d4;
	d6 = 4 * pow(b, 3) * a;
	d7 = pow(b, 4);
	d8 = d6 + d7;
	d9 = d5 / d8;
	cout << "Результат при использовании типа данных double для вычислений: " << d9 << "\n";
}
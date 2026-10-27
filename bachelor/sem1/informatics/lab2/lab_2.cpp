#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double e = pow(10, -4);
	double sum = 0.5, cur = 0.5;
	int n = 1;
	cout << "1. " << cur << endl;
	while (abs(cur) > e) {
		cur = cur * (2 * n + 1) / (4 * n - 2);
		cout << n + 1 << ". " << cur << endl;
		n++;
		sum += cur;
	}
	cout << "Приближённое значение суммы ряда: " << sum << " - сумма " << n << " членов ряда";
}
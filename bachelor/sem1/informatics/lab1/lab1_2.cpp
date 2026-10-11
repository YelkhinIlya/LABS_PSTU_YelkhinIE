#include <iostream>
using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int n=0, m=0;
	cout << "Введите n:";
	cin >> n;
	cout << "\n" <<"Введите m:";
	cin >> m;
	cout << "\n" << "1) n++-m = " << n++ - m << '\n';
	if (m-- > n) {
		cout << "2) m-->n = " << "true";
	}
	else {
		cout << "2) m-->n = " << "false";
	}
	cout << "\n";
	if (n-- > m) {
		cout << "3) n-->m = " << "true";
	}
	else {
		cout << "3) n-->m = " << "false";
	}
}
#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	double a, b, c;
	cout << "Введите 2 числа, которые необходимо перемножить" << endl;
	cin >> a >> b;
	c = a * b;
	cout << "Произведение " << a << " и " << b << " = " << c << endl;
	return 0;
}
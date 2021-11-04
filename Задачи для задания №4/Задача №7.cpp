#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	char a, b, c, d, e;
	cout << "Введите 5 символов\n";
	cin >> a >> b >> c >> d >> e;
	cout << "5 введённых символов в обратном порядке:\n";
	cout << e << d << c << b << a << endl;
	return 0;
}
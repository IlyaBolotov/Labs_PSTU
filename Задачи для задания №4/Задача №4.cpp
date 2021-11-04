#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	float F, C;
	cout << "Введите температуру в градусах по шкале Фаренгейта\n";
	cin >> F;
	C = (F - 32) * 5 / 9.0;
	cout << "Температура по шкале цельсия: " << C << endl;
	return 0;
}
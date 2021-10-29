#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int a,b;
	int i = 1;
	 //'++i' отличается от 'i++' тем, что 'i++' сначала выведет 'i', и только потом прибавит; а '++i' сначала прибавит, и только потом выведет 'i'
	a = ++i * i++;
	cout << a << endl; //Выводит ответ 4, потому что 
	//Часть 2
	cout << "" << endl;
	cout << "Задание 2" << endl;
	float f, g;
	cout << "Введите количество галлонов" << endl;
	cin >> g;
	f = g / 7.481;
	cout << "Футов в " << g << " галлонах - " << f << endl;
	//Часть 3
	cout << "" << endl;
	cout << "Задание 3" << endl;
	cout << "" << endl;
	int m, n;
	n = 20;
	m = 20;
	cout << "10" << endl;
	cout << n << endl;
	cout << --m << endl;
	cout << "" << endl;
	return 0;
}

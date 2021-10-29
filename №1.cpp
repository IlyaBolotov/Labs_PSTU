#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int s = 0;
	int a = 0;
	int b = 0;
	int c = 0;
	int max = 0;
	int min = 0;
	int mix = 0;
	cout << "Введите трёхзначное число" << endl;
	cin >> s;
	a = s / 100;
	b = s / 10 % 10;
	c = s % 10;
	while ((a == b) || (a == c) || (b == c)) 
	{
		cout << "Упс, надо ввести число  без повторяющихся цифр. Попробуйте ещё раз" << endl;
		cin >> s;
		a = s / 100;
		b = s / 10 % 10;
		c = s % 10;
	}
	cout << "Все возможные расстановки цифр" << endl;
	cout << a << b << c << endl;
	cout << a << c << b << endl;
	cout << b << a << c << endl;
	cout << b << c << a << endl;
	cout << c << a << b << endl;
	cout << c << b << a << endl;
	cout << "Самое большое число: ";
	if ((a>b)&&(a>c))
	{
		max = a;
		if (b > c) {
			mix = b;
			min = c;
		}
		else
		{
			min = b;
			mix = c;
		}
	}
	if ((b > c) && (b > a))
	{
		max = b;
		if (a > c)
		{
			mix = a;
			min = c;
		}
		else
		{
			mix = c;
			min = a;
		}
	}
	if ((c > b) && (c > a))
	{
		max = c;
		if (a > b)
		{
			mix = a;
			min = b;
		}
		else
		{
			mix = b;
			min = a;
		}
	}
	cout << max << mix << min << endl;
}

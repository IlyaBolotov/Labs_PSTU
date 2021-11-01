#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int s = 0; //Переменная для запоминания запрашиваемого у пользователя числа
	int a = 0; //Переменная для запоминнания первой цифры числа
	int b = 0; //Переменная для запоминания второй цифры числа
	int c = 0; //Переменная для запоминания третьей цифры числа
	int max = 0; //Переменная для запоминания цифры с максимальным значением
	int min = 0; //Переменная для запоминания цифры с минимальным значением
	int mix = 0; //Переменная для запоминания цифры со средним значением
	cout << "Введите трёхзначное число" << endl;
	do
	{
		cin >> s;
		a = s / 100;
		b = s / 10 % 10;
		c = s % 10;
		if ((s<100)||(s>999)) 
		{
			cout << "Надо ввести ТРЁХЗНАЧНОЕ число, попробуйте ещё раз" << endl;
		}
		else if ((a == b) || (a == c) || (b == c)) 
		{
			cout << "Надо ввести число без повторяющихся цифр, попробуйте ещё раз" << endl;
		}
	} while ((s<100) || (s>999) || (a == b) || (a == c) || (b == c));
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

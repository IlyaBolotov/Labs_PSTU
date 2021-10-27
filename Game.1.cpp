#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;
int main()
{		
	setlocale(LC_ALL, "Russian");
	srand(time(NULL));
	int n = rand() % 100 + 1;
	int a = 0;
	int c = 1;
while ((a != n) && (c != 8)) {
		cout << "Попытка номер " << c << ". Ваше число: ";
		cin >> a;
		c++;
		if (a > n)
		{
			cout << "Ваше число слишком большое" << endl;
		}
		else if (a < n)
		{
			cout << "Ваше число слишком маленькое" << endl;
		}
		cout << "" << endl;
	}
if (a == n)
{
	cout << "Поздравляю, вы выиграли в эту маленькую мини-игру. Хоть какая-то победа в вашей жалкой жизни" << endl;
}
if (c == 8)
{
	cout << "Ваши попытки закончились, число было " << n << endl;
}
cout << "" << endl;
}
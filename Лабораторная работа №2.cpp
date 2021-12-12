/*
Вариант 2
*/

#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i = 2, Summ = 0; // i - счётчик
	cout << "Требуется найти сумму положительных чётных чисел, меньших 100" << endl;
	while (i < 100)
	{
		Summ += i;
		i += 2;
	}
	cout << "Сумма равна: " << Summ << endl;
	cout << endl;


	//Способ 2
	
	i = 0;
	Summ = 0;
	while (i < 100)
	{
		if (i % 2 == 0)
			Summ += i;
		i++;
	}
	cout << "Сумма равна: " << Summ << endl;
	return 0;
}

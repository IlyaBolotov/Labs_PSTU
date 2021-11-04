#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Russian");
	const float a = 7.481;
	float F,G;
	cout << "Введите число галонов" << endl;
	cin >> G;
	F = G / a;
	cout << G << " футов в " << F << " галлонах" << endl;
	return 0;
}

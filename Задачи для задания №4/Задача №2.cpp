#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Russian");
	float i,k;
	cout << "Введите число галонов" << endl;
	cin >> k;
	i = k / 7.481;
	cout << "Футов в " << k << " галонах: " << i << endl;
	return 0;
}
#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL,"Russian");
	const float a = 7.481;
	float i,k;
	cout << "Введите число галонов" << endl;
	cin >> k;
	i = k / a;
	cout << "Футов в " << k << " галонах: " << i << endl;
	return 0;
}

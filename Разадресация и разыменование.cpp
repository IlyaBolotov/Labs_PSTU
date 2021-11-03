#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russia");
	//Разадресация
	int a = 322;
	int* b = &a;
	cout << b << endl;
	cout << " " << endl;
	//Разыменование
	a = 1337;
	b = &a;
	cout << *b << endl;
	cout << " " << endl;
	return 0;
}
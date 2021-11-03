#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int i = 1;
	cout << ++i * i++ << endl;
	return 0;
}
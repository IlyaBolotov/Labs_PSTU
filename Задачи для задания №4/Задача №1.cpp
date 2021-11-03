#include <iostream>

int main()
{
	setlocale(LC_ALL,"Russian");
	int i = 1;
	std::cout << "Значение выражения '++i * i++' = ";
	std::cout << ++i * i++ << std::endl;
	std::cout << "Значение i = " << i << std::endl;
	return 0;
}

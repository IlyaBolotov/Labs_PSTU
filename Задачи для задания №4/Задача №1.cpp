#include <iostream>

int main()
{
	int i = 1;
	std::cout << "Значение выражения '++i * i++' = ";
	std::cout << ++i * i++ << std::endl;
	std::cout << "Значение i = " << i << endl;
	return 0;
}

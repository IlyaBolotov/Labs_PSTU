#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rusiian");
	int N, i, j, k;
	cout << "Введите длину катета" << endl;
	cin >> N;
	for (i = 1; i <= N; ++i)
	{
		if ((i != N) && (i != 1))
		{
			k = ((N) * 2) - 2 - ((i - 1) * 2);
			for (j = 1; j <= k; j++)
			{
				cout << " ";
			}
			cout << "*";
			k = (i - 1) * 2 - 1;
			for (j = 1; j <= k; j++)
			{
				cout << " ";
			}
			cout << "*" << endl;
		}
		else if (i == N)
		{
			for (j = 1; j <= N; j++)
			{
				cout << "* ";
			}
			cout << endl;
		}
		else if (i == 1)
		{
			k = N * 2 - 2;
			for (j = 1; j <= k; j++)
			{
				cout << " ";
			}
			cout << "*" << endl;
		}
	}
	return 0;
}
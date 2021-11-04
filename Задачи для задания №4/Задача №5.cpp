#include <iostream>

using namespace std;
int main()
{
	setlocale(LC_ALL, "Russian");
	int h, h1, h2, m, m1, m2, s, s1, s2;
	cout << "Введите начальное и конечное время временного промежутка в формате 'часы минуты секунды'" << endl;
	cin >> h1 >> m1 >> s1 >> h2 >> m2 >> s2;
	h = h2 - h1;
	if (m2 < m1)
	{
		m2 = m2 + 60;
		--h;
	}
	m = m2 - m1;
	if (s2 < s1)
	{
		s2 = s2 + 60;
		--m;
	}
	s = s2 - s1;
	cout << "Во временном промежутке " << h << " часов, " << m << " минут и " << s << " секунд" << endl;
	return 0;
}
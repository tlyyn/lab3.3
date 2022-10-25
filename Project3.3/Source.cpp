// Lab_03_3.cpp
// Лин Тарас
// Лабораторна робота № 3.3
// Розгалуження, задане графіком функції.
// Варіант 13
#include <iostream>
#include <cmath>
using namespace std;
int main()
{
	double x; // вхідний аргумент
	double R; // вхідний параметр
	double y; // результат обчислення виразу
	cout << "R = "; cin >> R;
	cout << "x = "; cin >> x;

	// розгалуження в повній формі
	if (x <= R)
		y = x+R;
	else
		if ( R < x && x <= 0)
			y = sqrt((R*R))-(x*x);
		else
			if (0 < x && x <= 6)
				y = R + (-R/6)*x;
			else
					y = x;
	cout << endl;
	cout << "y = " << y << endl;
	cin.get();
	return 0;
}
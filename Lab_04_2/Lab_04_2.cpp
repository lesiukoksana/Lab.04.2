// Lab_04_2.cpp
// Лесюк Оксана
// Лабораторна робота № 4.2
// Табуляція функції, заданої формулою: функція однієї змінної
// Варіант 13

#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	double x, xp, xk, dx, A, B, y;

	cout << "xp = "; cin >> xp;
	cout << "xk = "; cin >> xk;
	cout << "dx = "; cin >> dx;

	cout << fixed;
	cout << "----------------------" << endl;
	cout << "|" << setw(7) << "x" << " |"
		<< setw(10) << "y" << " |" << endl;
	cout << "----------------------" << endl;

	x = xp;
	while (x <= xk)
	{
		A = 2 * fabs(x - 5);

		if (x < -1)
			B = (sin(x) * sin(x)) / (1 + fabs(cos(x)));
		else
			if (x > 1)
				B = log(fabs(x + 2));
			else
				B = cos(1 / (fabs(x + 2)) * cos(1 / (fabs(x + 2))));

		y = A - B;

		cout << "|" << setw(7) << setprecision(2) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}
	cout << "----------------------" << endl;
	return 0;

}
#include <iostream>
#include <functional>

using std::cout;

#include "solve_integral.h"

int main() {
	int a = 1, b = 3;
	double x1 = 0, x2 = 1, y1 = 1, y2 = 2;
	double step = 0.001, eps = 0.01, n, s;
	double integral = solve_by_trapezoid_method(f, a, b, step);
	cout << integral << "\n\n";
	integral = solve_by_Simpson_method(f, a, b, step);	//первое приближение для интеграла
	do {
		cout << integral << "\n\n";
		s = integral;									//второе приближение
		step *= 2;										//увеличение числа шагов в два раза,
														//т.е. уменьшение значения шага в два раза
		integral = solve_by_Simpson_method(f, a, b, step);
	} while (fabs(integral - s) > eps);					//сравнение приближений с заданной точностью
	cout << integral << "\n" << step;
	system("pause");
	return 0;
}
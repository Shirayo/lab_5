#include <cmath>
#include <functional>
#include "solve_integral.h"

double f(double x) {
	return (sin(x)* sin(x) / sqrt(1 + x * x * x));
}

double solve_by_Simpson_method(point_func f, double a, double b, double step) {
	const double n = (b - a) / step + 1;
	double f1 = 0, f2 = 0;
	for (int i = 1; i < n; i++) {
		f1 += f(a + step * (i - 0.5));
		f2 += f(a + step * i);
	}
	return step / 6 * (f(a) + f(b) + 4 * (f1 + f(b)) + 2 * (f2));
}

double solve_by_trapezoid_method(point_func f, const double & a, const double & b, double step) {
	double n = (b - a) / step + 1;
	double integral = (f(a) + f(b)) / 2;
	for (int i = 1; i < n; i++)
		integral += f(a + i * step);
	return integral * step;
}

double f2(double x, double y);

double f2(double x, double y)
{

	return 0.0;
}

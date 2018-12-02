#pragma once
typedef std::function<double(double)> point_func;

double f(double x);

double solve_by_Simpson_method(point_func f, double a, double b, double step);

double solve_by_trapezoid_method(point_func f, const double &a, const double &b, double step);
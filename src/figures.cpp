#include "figures.h"

#include <iostream>
#include <cmath>

#define M_PI 3.14159265358979323846

bool check_values_greater_zero(std::vector<double *>& values)
{
	bool below_zero = false;
	for (auto value : values) {
		if (*value < 0) {
			below_zero = true;
			*value = 0;
		}
	}

	if (below_zero) {
		std::cout << "Parameters must be positive\n";
	}

	return !below_zero;
}

Circle::Circle(double radius) : radius(radius)
{
	std::vector<double *> values = { & this->radius };
	check_values_greater_zero(values);
}

double Circle::get_square()
{
	return std::pow(radius, 2)*M_PI;
}

Triangle::Triangle(double a, double b, double angle) : a(a), b(b), angle(angle)
{
	std::vector<double*> values = { &this->a, &this->b, &this->angle };
	check_values_greater_zero(values);
}

double Triangle::get_square()
{
	return a*b*std::sin(angle*M_PI/180)/2;
}

Rectangle::Rectangle(double height, double width) : height(height), width(width)
{
	std::vector<double*> values = { &this->height, &this->width };
	check_values_greater_zero(values);
}

double Rectangle::get_square()
{
	return width*height;
}

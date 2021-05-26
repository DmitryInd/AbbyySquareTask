#include <vector>

bool check_values_greater_zero(std::vector<double*>& values);

enum Figures {
	CIRCLE,
	TRIANGLE,
	RECTANGLE
};

class Figure {
public:
	virtual double get_square() = 0;
};

class Circle : public Figure {
private:
	double radius;

public:
	explicit Circle(double radius);
	double get_square() override;
};

class Triangle : public Figure {
private:
	double a, b, angle;

public:
	explicit Triangle(double a, double b, double angle);
	double get_square() override;
};

class Rectangle : public Figure {
private:
	double height, width;

public:
	explicit Rectangle(double height, double width);
	double get_square() override;
};
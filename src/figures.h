#include <vector>

bool check_values_greater_zero(std::vector<double*>& values);

enum Figures {
	CIRCLE,
	TRIANGLE,
	RECTANGLE
};

class Figure {
public:
	virtual double calculate_area() = 0;
	virtual ~Figure() = default;
};

class Circle : public Figure {
private:
	double radius;

public:
	explicit Circle(double radius);
	double calculate_area() override;
};

class Triangle : public Figure {
private:
	double a, b, angle;

public:
	explicit Triangle(double a, double b, double angle);
	double calculate_area() override;
};

class Rectangle : public Figure {
private:
	double height, width;

public:
	explicit Rectangle(double height, double width);
	double calculate_area() override;
};
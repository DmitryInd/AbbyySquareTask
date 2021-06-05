#include <iostream>
#include <memory>
#include "figures.h"

void read_circle(std::shared_ptr<Figure> &figure) {
	double radius;
	std::cin >> radius;
	figure = std::make_shared<Circle>(radius);
}

void read_triangle(std::shared_ptr<Figure> &figure) {
	double a, b, angle;
	std::cin >> a >> b >> angle;
	figure = std::make_shared<Triangle>(a, b, angle);
}

void read_rectangle(std::shared_ptr<Figure> &figure) {
	double height, width;
	std::cin >> height >> width;
	figure = std::make_shared<Rectangle>(height, width);
}

int main() {
	std::cout << "Enter number of figure and it's parametrs:\n" <<
		"0 - Circle: radius\n" <<
		"1 - Triangle: a, b and angle between them in degrees\n" <<
		"2 - Rectangle: height and width\n";

	int input;
	std::cin >> input;

	std::shared_ptr<Figure> figure;
	switch (input) {
	case CIRCLE:
		read_circle(figure);
		break;
	case TRIANGLE:
		read_triangle(figure);
		break;
	case RECTANGLE:
		read_rectangle(figure);
		break;
	}

	std::cout << figure->calculate_area();
}
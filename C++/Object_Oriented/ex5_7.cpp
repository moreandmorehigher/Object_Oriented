#include <iostream>
using namespace std;

class Circle {
	int radius;
public:
	Circle() { radius = 1; }
	Circle(int radius) { this->radius = radius; }
	void setRadius(int radius) { this->radius = radius; }
	double getArea() { return 3.14 * radius * radius; }
};

void readRadius(Circle& c) {
	int r;
	cout << "int value·Î radius¸¦ input>>";
	cin >> r;	// radius value input
	c.setRadius(r);	// object c¿¡ radius set
}

int main() {
	Circle donut;
	readRadius(donut);
	cout << "Area of donut = " << donut.getArea() << endl;
}
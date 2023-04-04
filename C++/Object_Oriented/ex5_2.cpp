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
Circle getCircle() {
	Circle tmp(30);
	return tmp;	// ��ü tmp�� return
}
int main() {
	Circle c;	// object�� �����ȴ�. radius = 1�� initialize.
	cout << c.getArea() << endl;
	c = getCircle();
	cout << c.getArea() << endl;
}
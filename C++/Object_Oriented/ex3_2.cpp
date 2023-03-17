/*
Rectangle Class 만들기

다음 main() 함수가 잘 작동하도록 너비(width)와 높이(height)를 가지고 
면적 계산 기능을 가진 Rectangle 클래스를 작성하고 전체 프로그램을 완성하라.
*/
#include <iostream>
using namespace std;

class Rectangle {
public:
	int width;
	int height;
	double getArea();
};

double Rectangle::getArea() {
	return width * height;
}

int main() {
	Rectangle rect{};
	rect.width = 3;
	rect.height = 5;
	cout << "사각형의 면적은 " << rect.getArea() << endl;
}
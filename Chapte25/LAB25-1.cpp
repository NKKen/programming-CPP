#include <iostream>
#include <cmath>
using namespace std;

class Circle {
	public:
	double radius;
	
	Circle(double rr){
		radius = rr;
	}
	
	void findArea() {
		cout << "Area of circle is " << (3.14 * radius * radius) << std::endl;
	}
	void perimeter() {
		cout << "Perimeter of cicle is " << (2.0 * 3.14 * radius) << std::endl;
	}
};

int main(){
	Circle c(20);
	
	c.findArea();
	c.perimeter();
}

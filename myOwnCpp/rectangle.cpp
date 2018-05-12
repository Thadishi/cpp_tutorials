#include <cstdio>
#include <iostream>

using namespace std;

class Rectangle{
	int width, height;
	int breadth;
public:
	void set_values(const int, const int, const int);
	int area() {return width*height;}
	int volume() {return width*height*breadth;}
	int perimeter() {return (2*width + 2*height);}
};

void Rectangle::set_values(const int x, const int y, const int z){
	width = x;
	breadth = x;
	height = y;
}

int main(){
	Rectangle rect;
	rect.set_values(3, 5, 2);
	printf("The area of the reactangle is: %d\n",rect.area());
	printf("The volume of a Rectangle is: %d\n",rect.volume());
	printf("The perimeter of a Rectangle is: %d\n",rect.perimeter());

}
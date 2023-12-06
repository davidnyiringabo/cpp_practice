#include <iostream>
using namespace std;

class Rectangle{
	private:
		int width;
		int length;
	public:
		Rectangle();
		Rectangle(int, int);
		int area();
};

Rectangle::Rectangle(){
	width= 5;
	length= 5;
}
Rectangle::Rectangle( int len, int wid){
	width= len;
	length= wid;
}

Rectangle Rectangle::recta(){
	Rectangle r(10,20);
	return r;
}
Rectangle::area(){
	return this->length * this->width;
}

int main(){
	Rectangle rect;
	
	cout << rect.area();
	cout << recta.area();
	
	return 0;
}

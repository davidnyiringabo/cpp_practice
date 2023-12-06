#include <iostream>


const double PI = 3.14159265;
double calculateArea(int radius){
	return radius * radius * PI;
}
double calculateCircumference(int radius){
	return radius * 2 * PI;
}
int main(){
	int radius;
	std::cout << "Enter the radius of the circle: ";
	std::cin >> radius;
	
	std::cout << "The area of the circle with radius " << radius << " is " << calculateArea(radius);
	std::cout << "The circumference of the circle with radius " << radius << " is " << calculateCircumference(radius);	
	return 0;
}

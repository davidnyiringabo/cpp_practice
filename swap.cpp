#include <iostream>
using namespace std;

int main(){
	int x  = 9, y=19, temp;
	
	temp =x;
	x=y;
	y=temp;
	
	cout << "x is " << x << " and y is " << y ;
	
	return 0;
}

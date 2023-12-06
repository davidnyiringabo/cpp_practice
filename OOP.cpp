#include<iostream>
using namespace std;

class Rectangle{
	private:
		int width;
		int length;
	public:
		int area(){
			return length * width;
		}
		void setValues(int len, int wid){
			length = len;
			width = wid;
		}
		Rectangle(int w, int l){
			width = w;
			length = l;
		}
	
};

class Rectangle2{
	private:
		int width;
		int length;
	public:
		int area(){
			return length * width;
		}
		void setValues(int len, int wid);
	
};

void Rectangle2::setValues(int wid, int len){
	width = wid;
	length = len;
}
int main(){
	Rectangle rect(12,4);
	Rectangle *rectb = new Rectangle(12,4);
	Rectangle rectc{12,4};
	Rectangle rectbb={12,4};
//	rect.setValues(12,4);
	
	
	cout << "The area of the rectangle is: " <<  rectb->area();
	
	return 0;
}

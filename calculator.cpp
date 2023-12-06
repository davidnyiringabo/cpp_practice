#include <iostream>
//#include <string>
using namespace std;
//namespace calculate{
//	
//};

void calculate(int a, int b, int opt){
	int result= 0;
	switch(opt){
		case 1:
			result = a +b;
			cout << "Result: " << result;
			break;
		case 2:
			result = a - b;
			cout << "Result: " << result;
			break;
		case 3:
			result = a * b;
			cout << "Result: " << result;
			break;
		case 4:
			result = a / b;
			cout << "Result: " << result;
			break;
		case 5:
			result = a % b;
			cout << "Result: " << result;
			break;
		default:
			cout << "Invalid operator option.";
	}
}
int main(){
	int opt;
	int num1, num2;
	bool cont;
	cout << " Menu \n \n";
	cout << " 1.ADD \n 2.SUBSTRACT \n 3.MULTIPLY \n 4.DIVIDE \n 5.MODULUS \n";
	cout << " Enter your choice : ";
	cin >> opt;
	cout << " Enter your two numbers: ";
	cin >> num1 >> num2;
	calculate(num1, num2, opt);
	cout << " Continue ? ";
	cin >> cont;
	
	while(cont = true){
			cout << " Enter your choice : ";
			cin >> opt;
			cout << " Enter your two numbers: ";
			cin >> num1 >> num2;
			calculate(num1, num2, opt);
			cout << " Continue ? ";
			cin >> cont;
	}
	
	return 0;
}

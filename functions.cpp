#include<iostream>

using namespace std;
template<typename GroupD>
GroupD addition(GroupD a, GroupD b){
	return a + b;
};
/*
int addition (int a, int b);
double addition (double a, double b){
	return a + b;
}
*/


int main (){
	int num1, num2;
	cout << "Enter the two numbers: ";
	cin >> num1 >> num2;
	int result = addition(num1, num2);
	cout << "The sum of " << num1 << " and "<< num2 << " is " << addition(num1, num2);
	
	double num3, num4;
	cout << "Enter the two numbers: ";
	cin >> num3 >> num4;
	cout << "The sum of " << num3 << " and "<< num4 << " is " << addition(num3, num4);
}

//int addition (int num1, int num2){
//	return num1 + num2;
//}



#include <iostream>
using namespace std;

int sum(int a, int b){
	return a + b;
}
int main(){
	int a, b;
	cout << "Enter the two numbers: ";
	cin >> a >> b;
	
	int result = sum(a,b);
	
	cout << "The result is: " << result;
	
	return 0;
}

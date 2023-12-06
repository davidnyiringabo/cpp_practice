#include <iostream>

using namespace std;

int factorial(int n){
	if(n== 0){
		return 1;
	}
	if(n == 1){
		return 1;
	}
	
	return n * factorial(n-1);
}

int main(){
	
	int n = factorial(2);
	cout << "The result is " << n;
	return 0;
	
}

#include <iostream>

using namespace std;

int fibn(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	
	return fibn(n-1) + fibn(n-2);
}
int main(){
	int num;
	cout << "Enter the number: ";
	cin >> num;
	int result = fibn(num);
	cout << "The fibonnacci of " << num <<" is " << result;
	
	return 0;
}

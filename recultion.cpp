#include <iostream>
using namespace std;

int sum(int k){
	if(k == 0){
		return k;
	}else if(k == 1){
		return k;
	}
		return k + sum(k-1);
}
int main(){
	int num;
	int result;
	cout << "Enter the maximum number: ";
	cin >> num;
	result = sum(num);
	cout << "The sum is " << result;
	return 0;
	
}

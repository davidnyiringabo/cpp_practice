#include<iostream>

using namespace std;

int calculator(int n){
	int sumOdd = 0;
	int sumEven = 0;
	
	int i=0;
	int j=1;
	while(j<n){
		sumOdd += j;
		j=j+2;		
	}
	
	while(i<n){
		sumEven += i;
		i=i+2;
	}
	cout << "The difference is: " << sumOdd - sumEven;
}
int main(){
	int n = 0;
	
	cout << "Enter a number: ";
	cin >> n;
	
	calculator(n);
	
	return 0;
}

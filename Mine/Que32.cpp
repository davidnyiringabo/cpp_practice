#include<iostream>
using namespace std;

int countDigit(int num, int digit){
	int rem = 0;
	int newNum = 0;
	int temp2 = num;
	int temp = temp2;
	int numDigits = 0;
	int nOfTimes = 0;
	
	while(temp !=0){
		temp = temp /10;
		numDigits++;
	}
	int array[numDigits];
	int count = 0;
	
	
	while(num !=0){
		rem = num%10;
		num = num/10;
		
		array[count] = rem;
		count++;
	}
	
	for(int i= 0; i < numDigits; i++){
		printf(" %d ", array[i]);
	}
	
	for(int i = 0; i < numDigits; i++){
		if(array[i] == digit){
			nOfTimes++;
		}
	}
	
	return nOfTimes;
}
int main(){
	int n = countDigit(1239904, 9);
	cout << "The number occurs " << n << " times.";
	
	
	return 0;	
}

#include<iostream>
#include <bitset>

using namespace std;
int calculateOnes(int num){
	bitset<32> binary(100);
	cout << binary;
//	long long temp = binary;
	int temp = num;
	int array[] = {};
	int count = 0;
	
	while(temp != 0){
		array[count] = temp % 10;
		temp /= 10;
		count++;
	}
	
	for(int i= 0; i < count; i++){
		cout << array[i];
	}
	
}

int main(){
	calculateOnes(9);
	return 0;
}

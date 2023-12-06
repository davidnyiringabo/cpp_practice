#include<iostream>

using namespace std;

int calculateTheDiff(int array[],int size){
	int sumOdd = 0, sumEven = 0;
	for(int i = 0; i < size; i++){
		if(array[i] % 2 == 0){
			sumEven+= array[i];
		}else{
			sumOdd += array[i];
		}
	}
	
	cout << "The sum of odd numbers is " << sumOdd <<" And that of even are " << sumEven << endl;
	
	return sumOdd - sumEven;
}

int main(){
	int array[] = {2,3,5,5,4,6,5,3,4,4};
	int size = sizeof(array) / sizeof(array[0]);
	int diff = calculateTheDiff(array, size);
	
	cout << "The difference is " << diff;
	
	return 0;
}

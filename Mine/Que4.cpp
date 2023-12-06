#include<iostream>
using namespace std;

int checkMiddle(int array[], int len){
	if(len%2 == 0){
		return 0;
	}
	else{
		bool isCentered = false;
		for(int i =0; i < len; i++){
			if(array[i] >= array[i/2]){
				isCentered = true;
			}else{
				isCentered = false;
			}
		}
		
		if(isCentered){
			return 1;
		}else{
			return 0;
		}
	}
}

int main(){
	int arr[] = {2,3,4,2,4,4,5,2};
	int n = checkMiddle(arr, 9);
	cout << n;
		
	return 0;
}

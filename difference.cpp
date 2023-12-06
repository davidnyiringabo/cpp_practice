#include<iostream>

using namespace std;

int calculateSum(int n){
	int i=0;
	int res = 0;
	while(i<=n){
		res +=i;
		i++;
	}
	return res;
}

int calculateSumSqu(int n){
	int i=0;
	int res = 0;
	while(i<=n){
		res += i*i;
		i++;
	}
	return res;
}

int main(){
	int n;
	cout << "Enter the max integer: \n";
	cin >> n;
	int sumSum = calculateSum(n);
	int sumSqu = calculateSumSqu(n);
	int difference = sumSqu - sumSum;
	cout << "The difference is " << difference;
	return 0;	
}

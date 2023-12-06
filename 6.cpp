#include<iostream>

using namespace std;

int sum(int n){
	if(n == 8){
		return 0;
//		break;
	}
	
	int res=0;
	if(n%2 ==0){
		res = n + sum (n+2);
	}
}
int main(){
	int re = sum(0);
	
	cout << re;
	
	return 0;
}

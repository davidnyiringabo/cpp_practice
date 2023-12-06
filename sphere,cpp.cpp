#include<iostream>

using namespace std;

int main(){
	
	int r;
	
	cout << "Enter the value of radius of a sphere: " << endl;
	
	cin >> r;
	
	int res = (r * r * r * 4 * 3.14) / 3;
	
	cout << "The volume of a sphere is: " << res;
	
	return 0;
}

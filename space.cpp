#include <iostream>
using namespace std;

int main(){
	string stringExample = "This is the string example.";
	int length = 0;
	for(int len = 0; len <= stringExample.length() ; len ++){
		if(stringExample[len] == ' '){
			length +=1;
		}
	}
	
	cout << "The number of white spaces is " << length;
	
	return 0;
	
}

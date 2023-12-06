#include <iostream>
using namespace std;

int main(){
	char character;
	
	std::cout << "Enter the character " << endl;
	std::cin >> character;
	if(isdigit(character)){
		std::cout << "The entered character is a digit";
	}else if (isalpha(character)){
		std::cout << "The entered character is an alpha character";
	}else{
		std::cout << "The entered character is non of the options";
	}
	
	return 0;
}

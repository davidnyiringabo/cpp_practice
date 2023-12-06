#include <iostream>
using namespace std;
string reverseString(string word);
int main(){
	string word;
	cout << "Enter the word to reverse ";
	cin >> word;
	cout << "The reversed string is " << reverseString(word);
	
	return 0;
}

string reverseString(string word){
	string revWord;
	for( int len = word.length(); len > 0; len --){
		revWord += word[len - 1];
	}
	
	return revWord;
}

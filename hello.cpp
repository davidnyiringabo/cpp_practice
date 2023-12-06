#include <stdio.h>
#include <iostream>
using namespace std;
string fname = "Ihumure";
namespace groupd {
	string fname = "Mahoro";
};

int main(){
	string fname;
	cout <<"Enter your name: ";
	getline (cin, fname);
	cout << fname<< endl;
	cout << ::fname << endl;
	cout << "Hello " << groupd::fname;
	return 0;
}

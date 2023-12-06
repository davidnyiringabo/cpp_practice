#include <iostream>
using namespace std;
int main() {

    string fname;
    string lname;
    string age;

    cout << "Enter your first first name, last name and age" << endl;

    getline(cin, fname);
    getline(cin, lname);
    getline(cin, age);
    cout << "Your first first name is: " <<fname << " , last name: " << lname << " and age : " << age<< endl;
    return 0;
}


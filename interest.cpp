#include <iostream>
#include <string> // Add this for string input

using namespace std;

// Function prototype (declaration)
int calculate(int amount, int rate, int time);

int main() {
    string fname;
    int amount;
    int rate;
    int time;
    int result;

    cout << "Enter your full name: " << endl;
    getline(cin, fname);

    cout << "Enter the initial amount: ";
    cin >> amount;

    cout << "Enter the interest rate: ";
    cin >> rate;

    cout << "Enter the payment time: ";
    cin >> time;

    result = calculate(amount, rate, time);

    cout << "The calculated interest is: " << result << endl;

    return 0;
}

// Function definition for calculate
int calculate(int amount, int rate, int time) {
    int interest = amount * rate * time;
    return interest;
}


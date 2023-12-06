#include <iostream>
#include <cmath>
using namespace std;

int main() {
    int a, b;

    cout << "Enter the value of both sides: ";
    cin >> a >> b;
    cout << "The value of the area of the triangle is " << sqrt(pow(a, 2) + pow(b, 2)) << endl;

    return 0;
}


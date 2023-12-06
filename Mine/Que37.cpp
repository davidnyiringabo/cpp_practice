#include <iostream>
using namespace std;

void checkRainDrop(int num) {
    string result = "";

    if (num % 3 == 0) {
        result += "Pling";
    }
    if (num % 5 == 0) {
        result += "Plang";
    }
    if (num % 7 == 0) {
        result += "Plong";
    }

    if (!pling && !plang && !plong) {
        result = num;
    }

    cout << result << endl;
}

int main() {
    checkRainDrop(30);
    return 0;
}


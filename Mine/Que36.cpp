#include <iostream>
using namespace std;

void checkRainDrop(int num) {
    bool pling = false;
    bool plang = false;
    bool plong = false;
    string result = "";

    if (num % 3 == 0) {
        pling = true;
        result += "Pling";
    }
    if (num % 5 == 0) {
        plang = true;
        result += "Plang";
    }
    if (num % 7 == 0) {
        plong = true;
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


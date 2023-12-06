#include <iostream>
#include <cstring>
using namespace std;

void checkPalindrome(char word[]) {
    int size = strlen(word);
    bool isPalindrome = true;

    for (int i = 0, j = size - 1; i < j; i++, j--) {
        if (word[i] != word[j]) {
            isPalindrome = false;
            break;
        }
    }

    if (isPalindrome) {
        cout << "The word is a palindrome." << endl;
    } else {
        cout << "The word " << word << " is not a palindrome." << endl;
    }
}

int main() {
    checkPalindrome("woww");
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int nums[3];
    int size = sizeof(nums) / sizeof(nums[0]);
    cout << "Enter three integers: ";
    cin >> nums[0] >> nums[1] >> nums[2];

    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (nums[j] > nums[j + 1]) {
                int tmp = nums[j];
                nums[j] = nums[j + 1];
                nums[j + 1] = tmp;
            }
        }
    }

    for (int i = 0; i < sizeof(nums) / sizeof(nums[0]); i++) {
        cout << nums[i] << " ";
    }
    
    return 0;
}


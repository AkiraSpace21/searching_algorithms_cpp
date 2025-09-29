#include <iostream>
using namespace std;

int linear_search(int array[], int size, int target) {
    for (int idx = 0; idx < size; idx++) {
        if (array[idx] == target) return idx;
    }
    return -1;
}

int main() {
    int nums[] = {10, 25, 30, 45, 50};
    int length = sizeof(nums) / sizeof(nums[0]);
    int key = 30;

    int position = linear_search(nums, length, key);
    if (position != -1)
        cout << "Element found at index " << position << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}

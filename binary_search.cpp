#include <iostream>
using namespace std;

int binary_search(int array[], int size, int target) {
    int left = 0;
    int right = size - 1;

    while (left <= right) {
        int mid = left + (right - left) / 2;

        if (array[mid] == target) 
            return mid;
        else if (array[mid] < target) 
            left = mid + 1;
        else 
            right = mid - 1;
    }

    return -1;
}

int main() {
    int nums[] = {10, 20, 30, 40, 50};
    int length = sizeof(nums) / sizeof(nums[0]);
    int key = 40;

    int index = binary_search(nums, length, key);

    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}

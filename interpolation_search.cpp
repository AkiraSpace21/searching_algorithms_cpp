#include <iostream>
using namespace std;

int interpolation_search(int array[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high && target >= array[low] && target <= array[high]) {
        if (low == high) {
            if (array[low] == target) return low;
            return -1;
        }

        int pos = low + ((double)(high - low) / (array[high] - array[low])) * (target - array[low]);

        if (array[pos] == target) return pos;
        if (array[pos] < target) low = pos + 1;
        else high = pos - 1;
    }

    return -1;
}

int main() {
    int nums[] = {10, 20, 30, 40, 50, 60};
    int length = sizeof(nums) / sizeof(nums[0]);
    int key = 40;

    int index = interpolation_search(nums, length, key);

    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}

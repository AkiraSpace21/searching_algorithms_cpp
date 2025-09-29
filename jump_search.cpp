#include <iostream>
#include <cmath>
using namespace std;

int jump_search(int array[], int size, int target) {
    int step = sqrt(size);
    int prev = 0;

    while (array[min(step, size) - 1] < target) {
        prev = step;
        step += sqrt(size);
        if (prev >= size) return -1;
    }

    for (int i = prev; i < min(step, size); i++) {
        if (array[i] == target) return i;
    }
    return -1;
}

int main() {
    int nums[] = {10, 20, 30, 40, 50, 60, 70};
    int length = sizeof(nums) / sizeof(nums[0]);
    int key = 50;

    int pos = jump_search(nums, length, key);
    if (pos != -1)
        cout << "Element found at index " << pos << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}

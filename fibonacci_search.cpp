#include <iostream>
#include <algorithm>
using namespace std;

int fibonacci_search(int array[], int size, int target) {
    int fib2 = 0;    
    int fib1 = 1;      
    int fib = fib2 + fib1;  
    while (fib < size) {
        fib2 = fib1;
        fib1 = fib;
        fib = fib2 + fib1;
    }

    int offset = -1;

    while (fib > 1) {
        int i = min(offset + fib2, size - 1);

        if (array[i] < target) {
            fib = fib1;
            fib1 = fib2;
            fib2 = fib - fib1;
            offset = i;
        } 
        else if (array[i] > target) {
            fib = fib2;
            fib1 = fib1 - fib2;
            fib2 = fib - fib1;
        } 
        else {
            return i;
        }
    }

    if (fib1 && array[offset + 1] == target) return offset + 1;

    return -1;
}

int main() {
    int nums[] = {10, 22, 35, 40, 45, 50, 80};
    int length = sizeof(nums) / sizeof(nums[0]);
    int key = 45;

    int index = fibonacci_search(nums, length, key);
    if (index != -1)
        cout << "Element found at index " << index << endl;
    else
        cout << "Element not found in the array" << endl;

    return 0;
}

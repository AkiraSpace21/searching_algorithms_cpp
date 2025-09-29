# Searching Algorithms in C++

## Aim
To implement and study different searching algorithms in C++, including Linear Search, Binary Search, Jump Search, Interpolation Search, and Fibonacci Search, and to understand their working, efficiency, and practical applications.

---

## Theory
Searching algorithms are techniques used to locate a specific element (called the **target**) within a dataset. Efficient searching is crucial in computing for tasks such as database retrieval, data analysis, and problem-solving.  

### Key Concepts:
1. **Linear Search**:
   - The simplest search method that checks each element sequentially.
   - Works on unsorted or sorted datasets.
   - Time complexity: O(n).

2. **Binary Search**:
   - Divides a **sorted array** into halves repeatedly to find the target.
   - More efficient than linear search for large datasets.
   - Time complexity: O(log n).

3. **Jump Search**:
   - Works on sorted arrays by jumping ahead by fixed steps (usually √n) and then performing linear search in the block.
   - Time complexity: O(√n).

4. **Interpolation Search**:
   - Uses the value of the target to estimate its position in a **sorted array**.
   - Works best when elements are uniformly distributed.
   - Time complexity: O(log log n) on average; O(n) worst-case.

5. **Fibonacci Search**:
   - Uses Fibonacci numbers to divide the search space.
   - Works on sorted arrays and provides a more systematic division compared to binary search.
   - Time complexity: O(log n).

---

## Algorithms

### 1. Linear Search
1. Start from the first element of the array.  
2. Compare the current element with the target.  
3. If it matches, return the index.  
4. Move to the next element and repeat step 2.  
5. If the end of the array is reached without finding the target, return -1.  
6. Stop.

---

### 2. Binary Search
1. Ensure the array is sorted.  
2. Initialize two pointers: `left = 0` and `right = size - 1`.  
3. Find the middle element: `mid = left + (right - left)/2`.  
4. If `array[mid]` equals the target, return `mid`.  
5. If the target is less than `array[mid]`, repeat steps 3-4 on the left subarray.  
6. If the target is greater than `array[mid]`, repeat steps 3-4 on the right subarray.  
7. If `left > right`, the target is not present; return -1.  
8. Stop.

---

### 3. Jump Search
1. Ensure the array is sorted.  
2. Determine a fixed jump size `step = √size`.  
3. Jump through the array in blocks of size `step` until `array[step - 1] >= target`.  
4. Perform linear search in the current block.  
5. If the target is found, return its index; else return -1.  
6. Stop.

---

### 4. Interpolation Search
1. Ensure the array is sorted and values are approximately uniformly distributed.  
2. Initialize `low = 0` and `high = size - 1`.  
3. Estimate the probable position:  
   `pos = low + ((double)(high - low) / (array[high] - array[low])) * (target - array[low])`.  
4. If `array[pos]` equals the target, return `pos`.  
5. If `array[pos] < target`, search the right subarray; else search the left subarray.  
6. Repeat until the target is found or the search space is invalid.  
7. Return -1 if not found.  
8. Stop.

---

### 5. Fibonacci Search
1. Compute the smallest Fibonacci number greater than or equal to the array size.  
2. Initialize `offset = -1`.  
3. While the Fibonacci number `fib` is greater than 1:  
   - Calculate `i = min(offset + fib2, size - 1)` (`fib2` is the second previous Fibonacci number).  
   - If `array[i] < target`, move the range right and update Fibonacci numbers.  
   - If `array[i] > target`, move the range left and update Fibonacci numbers.  
   - If `array[i] == target`, return `i`.  
4. Check the last possible element.  
5. If not found, return -1.  
6. Stop.

---

## Conclusion
- Searching algorithms provide different strategies for locating elements in arrays.  
- **Linear search** is simple but inefficient for large datasets.  
- **Binary, Jump, Interpolation, and Fibonacci searches** require sorted arrays but are significantly faster.  
- Choice of search method depends on array size, distribution, and whether it is sorted.  
- Understanding these algorithms helps optimize data retrieval and improves overall program performance.

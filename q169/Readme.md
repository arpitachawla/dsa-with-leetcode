# LeetCode 169: Majority Element

## Problem
Find the majority element in an array (appears more than ⌊n/2⌋ times).

## Solutions
- **Method 1 (Boyer-Moore Voting)**  
  Uses a candidate and counter to track the majority element in O(1) space.  
  Efficient and optimal, works because the majority element is guaranteed to exist.

- **Method 2 (Hashmap / unordered_map)**  
  Counts frequencies using `unordered_map<int,int>`.  
  Straightforward and beginner-friendly, but requires O(n) extra space.

## Complexity
- Method 1: O(n) time, O(1) space  
- Method 2: O(n) time, O(n) space

## Notes
- Boyer-Moore is the optimal solution when majority element existence is guaranteed.  
- Hashmap approach is easier to understand conceptually, since it explicitly shows frequency counting.  
- **Both solutions here include a `main()` function, so they can be compiled and run directly in the console** using:
  ```bash
  g++ method1.cpp -o method1 && ./method1
  g++ method2.cpp -o method2 && ./method2


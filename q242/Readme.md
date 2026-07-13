# LeetCode 242: Valid Anagram

## Problem
Check if two strings are anagrams of each other.

## Solutions
- **Method 1 (Frequency Vector)**: Use a fixed-size vector of length 26 to track counts for each character. Increment for `s`, decrement for `t`. If all values are zero, they are anagrams.  
- **Method 2 (Sorting)**: Sort both strings and compare. If equal, they are anagrams.  
- **Method 3 (Unordered Map)**: Use `unordered_map<char,int>` to count characters in `s` and subtract counts using `t`. Works for general character sets.

## Complexity
- Method 1: O(n) time, O(1) space (lowercase only)  
- Method 2: O(n log n) time, O(1) space  
- Method 3: O(n) time, O(n) space (general)

## Usage
All solutions include a `main()` function and can run directly in the console:
```bash
g++ method1.cpp -o method1 && ./method1
g++ method2.cpp -o method2 && ./method2
g++ method3.cpp -o method3 && ./method3


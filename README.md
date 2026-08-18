# BytebyByte
A collection of LeetCode problem solutions implemented in C and C++, organized by topic and difficulty.

# LeetCode Solutions in C & C++

A collection of my solutions to [LeetCode](https://leetcode.com/) problems, implemented in **C** and **C++**. This repo serves as both a practice log and a reference for data structures & algorithms concepts.

## 📁 Repository Structure

```
leetcode-solutions/
├── Arrays/
├── Strings/
├── LinkedLists/
├── Trees/
├── Graphs/
├── DynamicProgramming/
├── Recursion-Backtracking/
├── Sorting-Searching/
├── Stack-Queue/
├── Greedy/
└── Misc/
```

Each folder contains solution files named by problem number and title, e.g.:
```
Arrays/1_TwoSum.cpp
Strings/5_LongestPalindromicSubstring.cpp
```

## 🧩 Format

Each solution file includes:
- Problem link / brief statement (as a comment)
- Approach summary
- Time & space complexity
- Clean, commented code

Example:
```cpp
// LeetCode 1: Two Sum
// Approach: Hash map to store complements
// Time: O(n) | Space: O(n)

#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int, int> seen;
        for (int i = 0; i < nums.size(); i++) {
            int complement = target - nums[i];
            if (seen.count(complement)) return {seen[complement], i};
            seen[nums[i]] = i;
        }
        return {};
    }
};
```

## 🛠️ How to Run

**C++:**
```bash
g++ -std=c++17 filename.cpp -o solution
./solution
```

**C:**
```bash
gcc filename.c -o solution
./solution
```

## 📊 Progress

| Topic | Solved |
|---|---|
| Arrays | 0 |
| Strings | 0 |
| Linked Lists | 0 |
| Trees | 0 |
| Graphs | 0 |
| Dynamic Programming | 0 |
| **Total** | **0** |

*(Update this table as you go!)*

## 🎯 Goals

- Build strong fundamentals in DSA
- Practice writing clean, efficient, and well-documented code
- Track consistency and progress over time

## 📄 License

This project is licensed under the MIT License — feel free to use or reference the solutions.

---

⭐ If you find this helpful, consider giving the repo a star!

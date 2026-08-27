// You are given an array of integers nums and an integer target, return indices of the two numbers such that they add up to target.

// You may assume that each input would have exactly one solution, and you may not use the same element twice.

// You can return the answer in any order.

#include <iostream>
#include <vector>
#include <unordered_map>
using namespace std;

vector<int> twoSum(vector<int>& nums, int target) {
    unordered_map<int, int> seen; // value -> index
    for (int i = 0; i < nums.size(); i++) {
        int complement = target - nums[i];
        if (seen.find(complement) != seen.end()) {
            return {seen[complement], i};
        }
        seen[nums[i]] = i;
    }
    return {}; // no solution found (won't happen per problem constraints)
}

int main() {
    vector<int> nums = {0, 1, 2, 2};
    vector<int> result = twoSum(nums, 2);
    for(int i: result){
        cout << i << " ";
    }cout << endl;
    return 0;
}


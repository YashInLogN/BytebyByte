#include <iostream>
#include <vector>
using namespace std;


int singleNumber(vector<int>& nums) {
    unordered_map<int, int> freq;
    for(int i = 0; i < nums.size(); i++){
        freq[nums[i]]++;
    } 
    for(auto &pair: freq){
        if(pair.second == 1) return pair.first;
    }
    return 0;
};

// int singleNumber_2(vector<int>& nums) {
//     int result = 0;
//     for(int i = 0; i < nums.size(); i++){
//         result ^= nums[i];
//     }
//     return result;
// };
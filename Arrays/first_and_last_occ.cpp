#include <iostream>
#include <vector>
using namespace std;

int firstOccurence(vector<int>& nums, int k){
    int start = 0, end = nums.size() - 1;
    int digit = -1;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(nums[mid] == k){
            digit = mid;
            end = mid - 1;
        }else if(nums[mid] < k) start = mid + 1;
        else end = mid - 1;
    }
    return digit;
}
int lastOccurence(vector<int>& nums, int k){
    int start = 0, end = nums.size() - 1;
    int digit = -1;
    while(start <= end){
        int mid = start + (end-start)/2;
        if(nums[mid] == k){
            digit = mid;
            start = mid + 1;
        }else if(nums[mid] < k) start = mid + 1;
        else end = mid - 1;
    }
    return digit;
}

vector<int> searchRange(vector<int>& nums, int target) {
        vector<int> v;
        int f = firstOccurence(nums, target);
        v.push_back(f);
        int l = lastOccurence(nums, target);
        v.push_back(l);
        return v;
}
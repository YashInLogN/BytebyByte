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

int main() {
    vector<int> nums;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        int element;
        cin >> element;
        nums.push_back(element);
    }   
    int result = singleNumber(nums);
    cout << "The single number is: " << result << endl;
    return 0;
}
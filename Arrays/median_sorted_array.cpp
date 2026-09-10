#include <iostream>
#include <vector>
using namespace std;

double medianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
    double median;
    vector<int> merged;
    merged.insert(merged.end(), nums1.begin(), nums1.end());
    merged.insert(merged.end(), nums2.begin(), nums2.end());
    sort(merged.begin(), merged.end());
    if (merged.size() % 2 == 0) {
        median = (merged[merged.size() / 2 - 1] + merged[merged.size()/ 2]) / 2.0;
    } else {
        median = merged[merged.size() / 2];
    }
    return median;
}
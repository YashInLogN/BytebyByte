#include <iostream>
#include <vector>
using namespace std;

void merge_sort(vector<int> &arr, size_t mid, size_t val, size_t s = 0){
    s = arr.size();
    if(s <= mid) return;
    for(size_t i = 0; i < mid; i++){
        if(arr[i] > arr[i+1]) swap(arr[i], arr[i+1]);
    }
    for(size_t i = val; i < s-1; i++){
        if(arr[i] > arr[i+1]) swap(arr[i], arr[i+1]);
    }
    merge_sort(arr, mid-1, val, s-1);
}

int main() {
    vector<int> arr = {5, 4, 3, 2, 1, 0};
    int s = 0, e = arr.size() - 1;
    int mid = s + (e-s)/2;
    merge_sort(arr, mid, mid+1);
    for(int i: arr){
        cout << i << " ";
    }cout << endl;
    return 0;
}
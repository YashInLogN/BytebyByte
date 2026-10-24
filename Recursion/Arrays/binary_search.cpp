#include <iostream>
using namespace std;

int binary_search(const vector<int> &arr, int low, int high, int element){
    if(low > high) return -1;
    int mid = low + (high - low)/ 2;
    if(arr[mid] == element) return mid;
    if(arr[mid] > element) high = mid-1;
    else low = mid + 1;
    return binary_search(arr, low, high, element);
}

int main() {
    int n = 11;
    vector<int> arr = {1, 2, 3, 4, 5};
    int ans = binary_search(arr, n, 0, arr.size() - 1);
    cout << "Index: " << ans << endl;
    return 0;
}
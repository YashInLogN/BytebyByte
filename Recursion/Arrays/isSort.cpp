#include <iostream>
#include <vector>
using namespace std;

bool isSorted(const vector<int> &arr, size_t i = 0) {
    if(i+1 >= arr.size()) return true;
    if (arr[i + 1] < arr[i]) return false;

    return isSorted(arr, i+1);
}

int main() {
    vector<int> arr = {1, 2, 3, 5, 4};
    cout << (isSorted(arr)? "Sorted" : "Not Sorted");
    cout << endl;
    for(auto i: arr){
        cout << i << " ";
    }cout << endl;
    return 0;
}
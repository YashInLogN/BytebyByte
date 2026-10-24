#include <iostream>
#include <vector>
using namespace std;


int linear_search(int *arr, int n, size_t size, size_t i = 0){
    if(i+1 >= size) return -1;
    if(arr[i] == n) return i;
    return linear_search(arr, n, size, i+1);
}

int main() {
    int arr[5] = {1, 2, 3, 4, 5};
    int ans = linear_search(arr, 4, sizeof(arr)/sizeof(arr[0]));
    cout << "Index: " << ans << endl;
    return 0;
}
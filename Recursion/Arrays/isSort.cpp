#include <iostream>
using namespace std;

void isSorted(int arr[], int n) {
    return;
}

int main() {
    int arr[5] = {5, 4, 3, 2, 1};
    isSorted(arr, sizeof(arr)/ sizeof(arr[0]));
    for(auto i: arr){
        cout << i << " ";
    }cout << endl;
    return 0;
}
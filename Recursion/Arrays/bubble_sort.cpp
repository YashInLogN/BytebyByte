#include <iostream>
#include <vector>
using namespace std;

void bubbleSort(vector<int> &arr, size_t round = 0 , size_t i = 0, size_t limit = 0){
    limit = arr.size();
    if(arr.size() <= 1 || round == limit) return;
    if(i + 1 >= limit){
        round += 1;
        limit -= round;
        i = 0;
    }
    if(arr[i] > arr[i+1]) swap(arr[i], arr[i+1]);
    bubbleSort(arr, round, i+1, limit);
}

int main() {
    vector<int> arr = {0, 0, 0, 0, 0, 0, 1, 0};
    bubbleSort(arr);
    for(auto e: arr){
        cout << e << " ";
    }cout << endl;
    return 0;
}
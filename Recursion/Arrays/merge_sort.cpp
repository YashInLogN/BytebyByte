#include <iostream>
#include <vector>
using namespace std;


void merge_sort(vector<int> &arr){

}

int main() {
    vector<int> arr = {5, 4, 3, 2, 1};
    merge_sort(arr);
    for(int i: arr){
        cout << i << " ";
    }cout << endl;
    return 0;
}
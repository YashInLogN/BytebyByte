#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> vec;
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;
    cout << "Enter the elements: ";
    for(int i = 0; i < n; i++) {
        int element;
        cin >> element;
        vec.push_back(element);
    }   
    for(const int& element : vec) {
        cout << element << " ";
    }
    cout << endl;
    return 0;
}
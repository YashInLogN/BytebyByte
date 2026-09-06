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

    vector<int> v(3, 0); // Initialize a vector of size 3 with all elements as 0
    for(const int& element : v) {
        cout << element << " ";
    }
    cout << endl;
    return 0;
}
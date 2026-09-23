#include <iostream>
using namespace std;

bool isPresent(int arr[][100], int rows, int cols,int target){
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            if(arr[i][j] == target){
                return true;
            }
        }
    }
    return false;
}

int main() {
    int rows, cols;
    int arr[100][100];
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    // Row- wise input
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> arr[i][j];
        }
    }

    int target;
    cout << "Enter the target element to search: ";
    cin >> target;

    if(isPresent(arr, rows, cols, target)){
        cout << "Element found in the array." << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}
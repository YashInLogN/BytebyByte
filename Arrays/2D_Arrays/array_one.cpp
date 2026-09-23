#include <iostream>
using namespace std;

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

    // Column-  wise input
    // for(int i = 0; i < cols; i++){
    //     for(int j = 0; j < rows; j++){
    //         cout << "Enter element at position (" << j << ", " << i << "): ";
    //         cin >> arr[j][i];
    //     }
    // }

    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }

    cout << sizeof(arr)/sizeof(arr[0]) << endl; // number of rows

    cout << sizeof(arr[0])/sizeof(arr[0][0]) << endl; // number of cols

    return 0;
}
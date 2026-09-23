#include <iostream>
using namespace std;


void wavePrint(int arr[][100], int rows, int cols){
    for(int col = 0; col < cols; col++) {
        if(col % 2 != 0) {
            for(int row = rows-1; row >= 0; row--) 
                cout << arr[row][col] << " ";
        }else{
            for(int row = 0; row < rows; row++) 
                cout << arr[row][col] << " ";
        }
    }
}

int main(){
    int rows, cols;
    int arr[100][100];
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> arr[i][j];
        }
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << arr[i][j] << " ";
        }
        cout << endl;
    }
    wavePrint(arr, rows, cols);
    cout << endl;
    return 0;
}
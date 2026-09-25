// Binary Search in a 2D Array
#include <iostream>
#include <vector>
using namespace std;

bool search2D(vector<vector<int>> &matrix, int target){
    int rows = matrix.size();
    int cols = matrix[0].size();
    int start = 0, end = rows * cols - 1;
    while(start <= end){
        int mid = start + (end - start) / 2;
        int midValue = matrix[mid / cols][mid % cols];
        if(midValue == target){
            return true;
        } else if(midValue < target){
            start = mid + 1;
        } else {
            end = mid - 1;
        }
    }
    return false;
}

int main(){
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;
    vector<vector<int>> matrix(rows, vector<int>(cols));
    cout << "Enter the elements of the matrix row-wise:\n";
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cin >> matrix[i][j];
        }
    }
    int target;
    cout << "Enter the target element to search: ";
    cin >> target;
    if(search2D(matrix, target)){
        cout << "Element found in the array." << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }
    return 0;
}
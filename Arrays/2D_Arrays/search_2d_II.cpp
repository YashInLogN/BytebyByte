#include <iostream>
#include <vector>
using namespace std;

int search2D(vector<vector<int>> &matrix, int target){
    int rows = matrix.size(), cols = matrix[0].size()-1;
    int rowIndex= 0, colIndex = cols;
    while(rowIndex < rows && colIndex >= 0){
        int element = matrix[rowIndex][colIndex];
        if(element == target)
            return true;
        else if(element > target)
            colIndex--;
        else
            rowIndex++; 
    }
    return false;
}

int main() {
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
}
#include <iostream>
#include <vector>
#include <climits>
using namespace std;


vector<vector<int>> rowSum(int arr[][100], int rows, int cols){

    vector<vector<int>> result;
    for(int i = 0; i < rows; i++){
        int sum = 0;
        for(int j = 0; j < cols; j++){
            sum += arr[i][j];
        }
        result.push_back({i, sum});
    }

    return result;
}

int rowWithLargestSum(int arr[][100], int rows, int cols){
    int sum = INT_MIN, rowIndex = 0;
    for(int i = 0; i < rows; i++){
        int check = 0;
        for(int j = 0; j < cols; j++){
            check += arr[i][j];
        }
        if(check > sum){
            sum = check;
            rowIndex = i;
        }
    }
    return rowIndex;
}

int main()
{
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

    int largestRow = rowWithLargestSum(arr, rows, cols);
    cout << "Row with the largest sum: " << largestRow << endl;

    vector<vector<int>> result = rowSum(arr, rows, cols);

    // Print the result
    for(const auto& row : result){
        cout << "Row " << row[0] << ": Sum = " << row[1] << endl;
    }

    return 0;
}
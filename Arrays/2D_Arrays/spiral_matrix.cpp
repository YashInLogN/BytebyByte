#include <iostream>
#include <vector>
using namespace std;

vector<int> spiralMatrix(vector<vector<int>> nums, int rows, int cols){
    vector<int> result;
    int top = 0, bottom = rows-1, left = 0, right = cols-1;
    while(top <= bottom && left <= right){
        for(int i = left; i <= right; i++){
            result.push_back(nums[top][i]);
        }
        top++;
        for(int i = top; i <= bottom; i++){
            result.push_back(nums[i][right]);
        }
        right--;
        if(top <= bottom){
            for(int i = right; i >= left; i--){
                result.push_back(nums[bottom][i]);
            }
            bottom--;
        }
        if(left <= right){
            for(int i = bottom; i >= top; i--){
                result.push_back(nums[i][left]);
            }
            left++;
        }
    }
    return result;    
}

int main() {
    int rows, cols;
    cout << "Enter the number of rows: ";
    cin >> rows;
    cout << "Enter the number of columns: ";
    cin >> cols;

    vector<vector<int>> nums(rows, vector<int>(cols));
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << "Enter element at position (" << i << ", " << j << "): ";
            cin >> nums[i][j];
        }
    }
    for(int i = 0; i < rows; i++){
        for(int j = 0; j < cols; j++){
            cout << nums[i][j] << " ";
        }
        cout << endl;
    }
    vector<int> result = spiralMatrix(nums, rows, cols);
    cout << "Spiral order: ";
    for(int num : result){
        cout << num << " ";
    }
    cout << endl;

    return 0;
}
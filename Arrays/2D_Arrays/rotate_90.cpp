#include <iostream>
#include <vector>
using namespace std;


vector<int> rotateMatrix90(vector<vector<int>> &matrix){
    vector<int> result;
    int n = matrix.size();
    for(int col = 0; col < n; col++){
        for(int row = n - 1; row >= 0; row--){
            result.push_back(matrix[row][col]);
        }
    }
    return result;
}

int main() {
    int n;
    cout << "Enter the size of the square matrix: ";
    cin >> n;

    vector<vector<int>> matrix(n, vector<int>(n));
    cout << "Enter the elements of the matrix row-wise:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cin >> matrix[i][j];
        }
    }

    vector<int> rotatedMatrix = rotateMatrix90(matrix);
    cout << "Matrix after rotating 90 degrees clockwise:\n";
    for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++){
            cout << rotatedMatrix[i * n + j] << " ";
        }
        cout << endl;
    }

    return 0;
}
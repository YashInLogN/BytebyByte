#include <iostream>
using namespace std;

int main() {
    char arr[5]; // Declare a character array of size 100
    // cout << "Enter: ";
    // for(int i = 0; i < 5; i++) {
    //     cin >> arr[i]; // Read a single character into the array
    // }
    cout << "Enter a string: ";
    cin.getline(arr, 5); // Read a line of text into the character array
    // cout << "You entered: " << arr << endl; // Output the string

    for(char c: arr) {
        cout << c; // Output each character in the array
    }
    cout << endl;
    return 0;
} 
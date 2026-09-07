#include <iostream>
using namespace std;

int getLength(char arr[]) {
    int len = 0;
    while(arr[len] != '\0') {
        len++;
    }
    return len;
}

char* reverseString(char arr[]) {
    int len = getLength(arr);
    char* reversed = new char[len + 1];
    for(int i = 0; i < len; i++) {
        reversed[i] = arr[len - 1 - i];
    }
    reversed[len] = '\0'; // Null terminate the reversed string
    return reversed;
}

int main() {
    char name[100];
    cout << "Enter a string: ";
    cin.getline(name, 100);
    char* reversedName = reverseString(name);
    cout << "Reversed string: " << reversedName << endl;
    return 0;
}
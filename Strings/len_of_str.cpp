#include <iostream>
using namespace std;

int lenOfString(char arr[]) {
    int len = 0;
    while(arr[len] != '\0') {
        len++;
    }
    for(int i =0; arr[i] != '\0'; i++) {
        len++;
    }
    return len;
}
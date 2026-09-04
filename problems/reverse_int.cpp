// Given a signed 32-bit integer x, return x with its digits reversed. 
// If reversing x causes the value to go outside the signed 32-bit integer range [-231, 231 - 1], 
// then return 0.

#include <iostream>
using namespace std;

int reverse(int x) {
    long long reversed = 0; // Use long long to handle overflow
    while (x != 0) {
        int digit = x % 10;
        reversed = reversed * 10 + digit;
        x /= 10;
    }
    // Check for overflow
    if (reversed < INT_MIN || reversed > INT_MAX) {
        return 0;
    }
    return static_cast<int>(reversed);
}


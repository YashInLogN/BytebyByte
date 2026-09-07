#include <iostream>
using namespace std;

bool isPalindrome(string s) {
    string result;
    for(auto c: s) {
        if (isalnum(static_cast<unsigned char>(c))) {
            result += tolower (static_cast<unsigned char>(c));
        }
    }
    int first = 0, last = result.size()-1;
    while(first < last) {
        if(result[first++] == result[last--]){
            continue;
        }else {
            return false;
        }
    }
    return true;
}
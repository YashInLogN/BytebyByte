#include <iostream>
using namespace std;


bool isPalindrome(int x){
    if (x < 0) return false;
    int m = x;
    long long result = 0;
    while(x != 0 ){
        int digit = x % 10;
        result = (long)result*10 + digit;
        x /= 10;
    }
    if(m == result) return true;
    else return false;
}

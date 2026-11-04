#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;

int reverse(int n){
    int number = 0;
    while(n != 0 ){
        int digit = n%10;
        number = number*10 + digit;
        n /= 10;
    }
    return number;
}

void sayDigit(int num){
    if(num == 0) return;
    string nums[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cout << nums[num % 10] << " ";
    sayDigit(num/10);
}
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    n = reverse(n);
    sayDigit(n);
    cout << endl;
    return 0;
}
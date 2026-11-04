#include <iostream>
#include <string>
#include <vector>
#include <math.h>
using namespace std;


void sayDigit(int num, string nums[]){
    if(num == 0) return;
    sayDigit(num/10, nums);
    cout << nums[num % 10] << " ";
}

int main() {
    string nums[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    int n;
    cout << "Enter the number: ";
    cin >> n;
    sayDigit(n, nums);
    cout << endl;
    return 0;
}
#include <iostream>
#include <string>
#include <vector>
using namespace std;

void sayDigit(int num){
    if(num == 0){
        cout << "Zero ";
        return;
    }
    if(num < 0) return;
    string nums[10] = {"zero", "one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    // string nums[10] = {"nine", "eight", "seven", "six", "five", "four", "three", "two", "one", "zero"};
    vector<string> ans;
    while(num != 0) { 
        int digit = num % 10;
        ans.push_back(nums[digit]);
        num /= 10;
    }
    for(int i = ans.size()- 1; i >= 0; i--){
        cout << ans[i] << " ";
    } 
    sayDigit(num/10);
}
int main() {
    int n;
    cout << "Enter the number: ";
    cin >> n;
    sayDigit(n);
    cout << endl;
    return 0;
}
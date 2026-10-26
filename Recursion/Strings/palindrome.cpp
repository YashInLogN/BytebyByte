#include <iostream>
#include <string>
using namespace std;

bool isPalindrome(const string &str, size_t i = 0){
    if(i + 1 >= str.size() || i >= str.size()/2) return true;
    if(str[i] != str[str.size() - 1 - i]) return false;
    return isPalindrome(str, i + 1);
}

int main() {
    string str = "hello";
    bool ans = isPalindrome(str);
    if(ans) cout << "True " << endl;
    else cout << "False " << endl;
    return 0;
}
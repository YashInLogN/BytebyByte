#include <iostream>
#include <string>
#include <vector>
using namespace std;

string removeSubstring(string str, string sub) {
    size_t pos = str.find(sub);
    while (pos != string::npos) {
        str.erase(pos, sub.length());
        pos = str.find(sub);
    }
    return str;
}

string removeSubstring2(string str, string sub) {
    string stack;
    int n = sub.size();
    for(auto c: str){
        stack.push_back(c);
        if(stack.size() >= n){
            bool match = true;
            for(int i = 0; i < n; i++){
                if(stack[stack.size() - n + i] != sub[i]){
                    match = false;
                    break;
                }
            }
            if(match){
                stack.resize(stack.size() - n);
            }
        }
    }
    return stack;
}

int main() {
    string input, substring;
    cout << "Enter a string: ";
    getline(cin, input);
    cout << "Enter the substring to remove: ";
    getline(cin, substring);
    string result = removeSubstring2(input, substring);
    cout << "String after removing substring: " << result << endl;
    return 0;
}
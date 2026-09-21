#include <iostream>
#include <string>
#include <vector>
using namespace std;

string removeSubstring(string str, const string& part){
    while(str.length() != 0 && str.find(part) < str.length()){
        str.erase(str.find(part), part.length());
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
    string result = removeSubstring(input, substring);
    cout << "String after removing substring: " << result << endl;
    return 0;
}
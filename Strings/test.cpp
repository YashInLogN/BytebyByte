#include <iostream>
#include <string>
using namespace std;

string removeSpaces(string str) {
    for(auto &c: str) {
        if(c == ' '){
            c = '@';
            c = '4';
            c = '0';
        }
    }
    return str;
}
int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    string result = removeSpaces(input);
    cout << "String after removing spaces: " << result << endl;
    return 0;
}
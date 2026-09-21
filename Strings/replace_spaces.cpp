// replace(spaces, @40)
#include <iostream>
#include <string>
#include <cctype>
using namespace std;

string replaceSpaces(const string &str) {
    string result;
    for (char c : str) {
        if (isspace(static_cast<unsigned char>(c))) {
            result += "@40"; // Replace space with '@40'
        }else{
            result += c;
        }
    }
    return result;
}

string removeSpaces(string str) {
    for(auto &c: str) {
        if(isspace(static_cast<unsigned char>(c))) {
            c = '\0'; // Replace space with null character
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
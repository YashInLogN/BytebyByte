#include <iostream>
#include <string>
#include <vector>
#include <sstream>
#include <algorithm>
using namespace std;

string reverseWords(string s) {
    istringstream iss(s);
    string word;
    string result;
    while(iss >> word){
        reverse(word.begin(), word.end());
        result += word + " ";
    }
    if(!result.empty()){
        result.pop_back(); // Remove the trailing space
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    string reversed = reverseWords(input);
    cout << "Reversed words: " << reversed << endl;
    return 0;
}
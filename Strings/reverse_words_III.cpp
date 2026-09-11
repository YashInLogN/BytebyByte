#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string reverseWords(string s) {
    istringstream iss(s);
    string word;
    string result;
    while (iss >> word) {
        reverse(word.begin(), word.end());
        result += word + " ";
    }
    if (!result.empty()) {
        result.pop_back(); // Remove the trailing space
    }
    return result;
}

string reverseWords2(string s) {
    istringstream iss(s);
    string word;
    vector<string> words;
    while(iss >> word){
        words.push_back(word);
    }
    string result;
    for(int i = 0; i < words.size(); i++){
        reverse(word.begin(), word.end());
        result += words[i];
        if(i != words.size() - 1) result += " ";
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
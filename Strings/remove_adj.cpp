#include <iostream>
#include <string>
using namespace std;

string removeAdjacentDuplicates(string s){
    string result = "";

    for (char c : s) {
        if (!result.empty() && result.back() == c) {
            result.pop_back();       // adjacent duplicate: remove it
        } else {
            result.push_back(c);     // no match: keep it
        }
    }
    return result;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    string result = removeAdjacentDuplicates(input);
    cout << "String after removing adjacent duplicates: " << result << endl;
    return 0;
}
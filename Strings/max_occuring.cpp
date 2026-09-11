#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

char maxOccuringChar(string str){
    unordered_map<char, int> charCount;
    for(char c: str) {
        charCount[c]++;
    }
    int maxCount = 0;
    char answer = str[0];
    for(auto& it: charCount){
        if(it.second > maxCount){
            maxCount = it.second;
            answer = it.first;
        }
        if(it.second == maxCount && it.first < answer){
            answer = it.first;
        }
    }
    return answer;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    char maxChar = maxOccuringChar(input);
    cout << "Max occurring character: " << maxChar << endl;
    return 0;
}

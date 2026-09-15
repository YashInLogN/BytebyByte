#include <iostream>
#include <string>
#include <unordered_map>
#include <sstream>
using namespace std;


char maxOccuringChar(string &str){
    unordered_map<char, int> charCount;
    for(char c: str){
        charCount[c]++;
    }
    int charMax = 0;
    char maxChar = '\0';
    for(auto &pair: charCount){
        if(pair.second > charMax){
            charMax = pair.second;
            maxChar = pair.first;
        }if(pair.second == charMax && pair.first < maxChar){
            maxChar = pair.first;
        }
    }
    return maxChar;
}

string reverseString(string &str){
    // string reversedStr = "";
    // int strSize = str.size() - 1;
    // while(strSize >= 0){
    //     reversedStr += str[strSize];
    //     strSize--;
    // }
    int s = 0, e = str.size() - 1;
    while(s < e){
        swap(str[s], str[e]);
        s++;
        e--;
    }
    return str;
}

string reverseString2(string &str){
    istringstream iss(str);
    string word;
    string reversedStr = "";
    while(iss >>word){
        reverse(word.begin(), word.end());
        reversedStr += word + " ";
    }
    if(!reversedStr.empty()){
        reversedStr.pop_back(); // Remove the trailing space
    }
    return reversedStr;
}

bool isPalindrome(string str){
    string result = "";
    for(const char& c: str){
        if(isalnum(static_cast<unsigned char>(c))){
            result += tolower(static_cast<unsigned char>(c));
        }
    }
    int s=0, e = result.size() - 1;
    while(s < e){
        if(result[s] != result[e]) return false;
        s++;
        e--;
    }
    return true;
}

string reverseWords(string &str){
    istringstream iss(str);
    string word;
    vector<string> words;
    while(iss >> word){
        reverse(word.begin(), word.end());
        words.push_back(word);
    }
    str = "";
    for(int i = words.size()-1; i >= 0; i--){
        str += words[i];
        if(i != 0) str += " ";
    }
    return str;

}

string removeSubstring(const string& str, const string& sub){
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
            }if(match){
                stack.resize(stack.size() - n);
            }
        }
    }
    return stack;
}

int main() {
    string input;
    cout << "Enter a string: ";
    getline(cin, input);
    
    char maxCharCount = maxOccuringChar(input);
    cout << "Maximum occurring character count: " << maxCharCount << endl;

    // string reversed = reverseString(input);
    // cout << "Reversed string: " << reversed << endl;

    // string reversed2 = reverseString(input);
    // cout << "Reversed string (word-wise): " << reversed2 << endl;

    bool palindrome = isPalindrome(input);
    cout << "Is the string a palindrome? " << (palindrome ? "Yes" : "No") << endl;

    string reversedWords = reverseWords(input);
    cout << "Reversed words: " << reversedWords << endl;

    return 0;
}
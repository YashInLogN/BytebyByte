#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool checkInclusion(string &str1, string &part){
    int charCount[26] = {0};
    int m = str1.size(), n = part.size();
    if(n > m) return false;
    for(int i = 0; i < m; i++) {
        int index = str1[i] - 'a';
        charCount[index]++;
    }
    
}

int main() {
    string str1, str2;
    cout << "Enter the first string: ";
    getline(cin, str1);
    cout << "Enter the second string: ";
    getline(cin, str2);
    if(checkInclusion(str1, str2)){
        cout << "The first string is a permutation of the second string." << endl;
    }
    else{
        cout << "The first string is not a permutation of the second string." << endl;
    }
    return 0;
}
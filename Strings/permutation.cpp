#include <iostream>
#include <string>
#include <unordered_map>
using namespace std;

bool checkInclusion(string &s1, string &s2){
    int m = s2.size(), n = s1.size();
    int charCount[26] = {0};
    int charCount2[26] = {0};

    for(int i = 0; i < n; i++){
        charCount[s1[i] - 'a']++;
        charCount2[s2[i] - 'a']++;
    }

    if(equal(charCount, charCount + 26, charCount2)) return true;

    for(int i = n; i < m; i++){
        charCount2[s2[i] - 'a']++;
        charCount2[s2[i - n] - 'a']--;
        if(equal(charCount, charCount + 26, charCount2)) return true;
    }

    return false;
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
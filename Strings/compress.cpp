#include<iostream>
#include<vector>
#include<string>
using namespace std;

int compressString(vector<char>& chars){
    int write = 0, read = 0;
    int n = chars.size();
    while(read < n){
        char c = chars[read];
        int count = 0;
        while(read < n && chars[read] == c){
            read++;
            count++;
        }
        chars[write++] = c;
        if(count > 1){
            for(char digit : to_string(count)){
                chars[write++] = digit;
            }
        }
    }
    return write;
}
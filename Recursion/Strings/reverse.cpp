#include <iostream>
#include <string>
using namespace std;

void reverse(string &str, size_t i = 0){
    if(i + 1 >= str.size() || i >= str.size()/2) return;
    swap(str[i], str[str.size() - 1 - i]);
    reverse(str, i + 1);
}
int main() {
    string str = "hello world";
    reverse(str);
    cout << str << endl;
    return 0;
}
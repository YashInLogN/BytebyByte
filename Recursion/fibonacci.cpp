#include<iostream>
using namespace std;


int main(){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    int t0 = 0, t1 = 1, nextTerm = t0 + t1;
    cout << nextTerm << endl;
    return 0;
}
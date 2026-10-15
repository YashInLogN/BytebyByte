#include<iostream>
using namespace std;

void fibonacci(int n, int t1, int t2){
    if(n <= 0) return;
    int nTerm = t1 + t2;
    cout << nTerm << ", ";
    n--;
    fibonacci(n, t2, nTerm);
}
int main(){
    int n;
    cout << "Enter the number of terms: ";
    cin >> n;
    int t1 = 0, t2 = 1;
    cout << t1 << ", " << t2 << ", ";
    fibonacci(n-2, t1, t2);
    cout << endl;
    return 0;
}
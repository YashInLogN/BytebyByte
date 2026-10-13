#include <iostream>
using namespace std;

double myPow(int n, int k){
    if(k == 0 || n == 1) return 1;
    if(k < 0) return 1 / myPow(n, -k);
    return n * myPow(n, k-1);
}

int main() {
    int n, k;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the exponent: ";
    cin >> k;
    cout << n << " raised to the power of " << k << " is: " << myPow(n, k) << endl;
    return 0;
}
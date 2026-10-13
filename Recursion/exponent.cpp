#include <iostream>
using namespace std;

int exponentFunc(int n, int k){
    int ans = 1;
    if(k == 0) return ans;
    if(k < 0) return 1 / exponentFunc(n, -k);
    ans = n * exponentFunc(n, k-1);
    return ans;
}

int main() {
    int n, k;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the exponent: ";
    cin >> k;
    cout << n << " raised to the power of " << k << " is: " << exponentFunc(n, k) << endl;
    return 0;
}
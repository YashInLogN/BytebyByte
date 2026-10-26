#include <iostream>
using namespace std;


double power(double n, long long e){
    if(e == 0) return 1.0;
    double half = power(n, e/2);
    return (e % 2 == 0) ? half*half : half*half*n;
}
double myPow(double n, int k){
    long long e = k;
    if(k < 0) {
        e = -e;
        n = 1/ n;
    }
    return power(n, k);
}


int main() {
    int n, k;
    cout << "Enter a number: ";
    cin >> n;
    cout << "Enter the exponent: ";
    cin >> k;
    double ans = myPow(n ,k);
    cout << n << " raised to the power of " << k << " is: " << ans << endl;
    return 0;
}
#include <iostream>
using namespace std;

int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int gcd2(int a, int b){
    if(a == 0)
        return b;
    if(b == 0)
        return a;
    while(a != b){
        if(a > b)
            a -= b;
        else
            b -= a; 
    }
    return a;
}
int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "GCD of " << a << " and " << b << " is: " << gcd2(a, b) << endl;
    return 0;
}
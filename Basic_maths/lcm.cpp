#include <iostream>
using namespace std;


// Relation: lcm(a, b) = (a * b) / gcd(a, b)

int gcd(int a, int b){
    if(b == 0)
        return a;
    return gcd(a, a % b);
}
int lcm(int a, int b) {
    return (a * b) / gcd(a, b);
}

int main() {
    int a, b;
    cout << "Enter two numbers: ";
    cin >> a >> b;
    cout << "LCM of " << a << " and " << b << " is: " << lcm(a, b) << endl;
    return 0;
}
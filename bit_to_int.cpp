#include <iostream>
using namespace std;
#include <math.h>

int main() {
    int n;
    cout << "Input the binary value: ";
    cin >> n;
    int i = 0;
    int result = 0;
    while(n!=0) {
        int digit = n%10;
        result = digit*pow(2, i) + result;
        i++;
        n /= 10;
    }


    cout << "Integer Value: " << result << endl;
    return 0;
}
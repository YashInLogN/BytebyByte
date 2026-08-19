#include <iostream>
#include<math.h>
using namespace std;


int main() {
    int n;
    cout << "Enter the value of the Int: ";
    cin >> n;
    int i = 0;
    int result = 0;
    while(n != 0) {
        int bit = (n&1);
        result = bit*pow(10, i) + result;
        i++; 
        n = n >> 1;
    }
    cout << "Binary Value: " << result << endl;
    return 0;
}
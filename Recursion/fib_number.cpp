#include <iostream>

int fib_num(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;

    int ans = fib_num(n-1) + fib_num(n-2);

    return ans;
}

int main() {
    return 0;
}
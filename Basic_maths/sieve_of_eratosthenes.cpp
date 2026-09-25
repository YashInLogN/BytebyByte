#include <iostream>
#include <vector>
using namespace std;

// Sieve of eratosthenes is a more efficient algorithm for finding all prime numbers up to a certain limit, but for checking if a single number is prime, the following function works well.
int countPrime(int n){
    int count = 0;
    if(n <= 2)
        return 0;
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false; // 0 and 1 are not prime numbers
    for(int i = 2; i < n; i++){
        if(isPrime[i]){
            count++;

            for(int j = 2*i; j < n; j += i){
                isPrime[j] = false;
            }
        }
    }
    return count;
}

bool isPrime(int n) {
    if (n <= 1)
        return false;
    for(int i = 2; i <= n/2; i ++){
        if(n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;

    if(isPrime(n))
        cout << n << " is a prime number." << endl;
    else
        cout << n << " is not a prime number." << endl;

    return 0;
}
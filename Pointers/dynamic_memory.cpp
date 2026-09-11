#include <iostream>
using namespace std;

int main() {
    int *i = new int;
    *i = 5;
    cout << *i << endl;
    delete i;
    i = nullptr;
    return 0;
}
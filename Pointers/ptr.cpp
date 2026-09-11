#include <iostream>
using namespace std;
int main() {
    int i = 1;
    int *ptr = &i; // Pointer to integer i
    int &ref = i; // Reference to integer i
    int *ptr2 = ptr; // Pointer to pointer ptr
    int *ptr3 = nullptr; // Null pointer
    ptr3 = &i;
    return 0;
}
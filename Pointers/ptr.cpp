#include <iostream>
using namespace std;
int main() {
    int i = 1;
    int *ptr = &i; // Pointer to integer i
    int &ref = i; // Reference to integer i
    cout << "Address of i: " << &i << endl;
    cout << "Address of first pointer: " << ptr << endl;
    cout << "Address of reference: " << &ref << endl;
    int *ptr2 = ptr; // Pointer to pointer ptr
    int *ptr3 = nullptr; // Null pointer
    ptr3 = &i;
    cout << "Value of i: " << i << endl;
    cout << "Value of first pointer: " << *ptr << endl;
    cout << "Value of reference: " << ref << endl;
    cout << "Value of second pointer: " << *ptr2 << endl;
    cout << "Value of third pointer: " << *ptr3 << endl;
    return 0;
}
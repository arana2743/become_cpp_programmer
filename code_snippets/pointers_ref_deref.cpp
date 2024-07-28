#include<iostream>
using namespace std;

int main() {
    int num1 = 10;
    int *ptr = nullptr;
    
    if (ptr == nullptr) {
        cout << "attempting to dereference null pointer (address is not available)" << endl;
    }
    // assign reference of num1 to ptr
    ptr = &num1;

    int getValue = *ptr; // de-reference the pointer to get value
    cout << "value of pointer: " << ptr << endl;
    cout << "value from dereferencing the ptr is: " << getValue << endl;
    return 0;
}
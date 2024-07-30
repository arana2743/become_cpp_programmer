#include<iostream>
using namespace std;

// this function takes pointers as parameters
void swap_with_pointers(int* xPtr, int* yPtr) {
    int temp = *xPtr;
    *xPtr = *yPtr;
    *yPtr = temp;
}
// this function takes references as parameters
void swap_with_reference(int& x, int& y) {
    int temp = x;
    x = y;
    y = temp;
}

int main() {
    int x,y;
    x = 20;
    y = 30;
    cout << "(with references args) values before: (" << x << "," << y << ")" << endl;
    swap_with_reference(x, y);
    cout << "(with references args) values after: (" << x << "," << y << ")" << endl;

    cout << "(with pointers args) values before: (" << x << "," << y << ")" << endl;
    swap_with_pointers(&x, &y);
    cout << "(with pointers args) values after: (" << x << "," << y << ")" << endl;
    return 0;
}
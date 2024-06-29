#include<iostream>
using namespace std;

int addFunc(int a, int b) { return a + b; }

// simple demo of function objects vs normal function
void functionObjectVsFunction() {
    // function object example
    struct AddObj {
        int operator()(int a, int b) const { return a + b; }
    };

    // function object since it's an object will also have a state
    AddObj addObj;

    cout << "struct result: " << addObj(10, 20) << endl;
    cout << "function result: " << addFunc(10, 20) << endl;
    cout << "is result from struct and func equal? " << (addObj(10,20) == addFunc(10,20)) << endl;
}

// now with lambda functions
void lambdaVsFunction() {
    // auto addObj = [](int a, int b) -> { return a + b; };
    auto addObj = [](int a, int b){ return a + b; };
    bool isEqual = (addObj(10, 24) == addFunc(10, 24));
    cout << "is result from lambda and func equal? " << isEqual << endl;

}
int main() {
    functionObjectVsFunction();
    lambdaVsFunction();
    return 0;
}
#include<iostream>
#include<chrono>
#include <iomanip>
using namespace std;

double recursiveFactorial(int number) {
    // base case
    if (number <= 1) {
        return (double)1;
    }
    return recursiveFactorial(number -1) * number;
}

int main() {
    int number = 20;
    auto start = chrono::high_resolution_clock::now();
 
    // unsync the I/O of C and C++.
    ios_base::sync_with_stdio(false);
    double result = recursiveFactorial(number);

    auto end = chrono::high_resolution_clock::now();
    // Calculating total time taken by the program.
    double time_taken = chrono::duration_cast<chrono::nanoseconds>(end - start).count();
 
    time_taken *= 1e-9;
 
    cout << "Time taken by program is : " << fixed 
         << time_taken << setprecision(9);
    cout << " sec" << endl;
    cout << "factorial of " << number << ": " << result << endl;
    return 0;
}
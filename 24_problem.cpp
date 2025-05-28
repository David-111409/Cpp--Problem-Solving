#include <iostream>
using namespace std;



long long fact(int n){
    if (n <= 2) return n;
    return fact(n -1) * n;
}
    
int main(){
    int N;
    cin >> N;
    cout << fact(N);
}


/*
J. Factorial
time limit per test1 second
memory limit per test64 megabytes

Given a number N. Print factorial of N.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 20).

Output
Print the factorial of the number N.

Example
input
5
output
120
 */

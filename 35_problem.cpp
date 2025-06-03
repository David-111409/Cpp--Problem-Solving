#include <iostream>
using namespace std;

int fibonacci(int n){
    if (n <= 2) return n-1;

    return fibonacci(n -1 ) + fibonacci(n -2 );
}

    
int main(){
    int N;
    cin >> N;
  
    cout << fibonacci(N) << endl;

}

/*
O. Fibonacci
time limit per test1 second
memory limit per test256 megabytes

Given a number N. Print the value of the Nth Fibonacci number.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 30).

Output
Print the value of the Nth Fibonacci number.

Example
input
5
output
3 */

#include <iostream>
using namespace std;

bool is_prime(long long n){
    if (n <= 1) return false;
    else if (n <= 3) return true;
    else if (n % 2 == 0) return false;
    else if (n % 3 == 0) return false;

    long long i = 5;
    while (i * i <= n){
        if (n % i == 0 || n % (i + 2) == 0) return false;
        i += 6;
    }

    return true;
}

    
int main(){
    long long n, k;
    cin >> k;
    for (int j = 0; j < k; j++){
        cin >> n;
        if (is_prime(n)) cout << "YES" << endl;
        else cout << "NO" << endl;
    }
}

/*
D. Prime Function

time limit per test2 seconds
memory limit per test256 megabytes
A prime number is a number that is greater than 1 and has only two factors which are 1 and itself. 
The first few prime numbers are 2, 3, 5, 7, 11, 13, 17, 19, 23 and 29.

Given a number N. Determine whether N is prime or not.

Note: Solve this problem using function.

Input
First line will contain a number T (1 ≤ T ≤ 103) number of test cases.

Next T lines will contain a number N (1 ≤ N ≤ 109).

Output
Print "YES" if the Nth number is prime otherwise, print "NO".

Example
input
3
2
4
8
output
YES
NO
NO
Note
Don't use an array.
3 
*/

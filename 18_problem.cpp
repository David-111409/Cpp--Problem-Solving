#include <iostream>
using namespace std;

bool isPowerOfTwo(long long n){
while(n > 1){
    if (n % 2) return false;
    n /= 2;
}

return true;
}

int main(){

long long n ;
cin >> n;

if (isPowerOfTwo(n)) 
    cout << "YES";
else 
    cout << "NO";

return 0;
}


/*
A. Power Of Two

time limit per test1 second
memory limit per test256 megabytes
Given a number 𝑁. Determine whether 𝑁 is power of 2 or not.

Input
Only one line contains a number 𝑁 (1≤𝑁≤1018).

Output
Print "YES" if 𝑁 is power of 2 otherwise, print "NO".

Examples
input
8
output
YES
input
10
output
NO */

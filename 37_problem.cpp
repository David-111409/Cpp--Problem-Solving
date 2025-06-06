#include <iostream>
using namespace std;

bool is_even(long long n){
    return n % 2 == 1;
}

bool is_palindrome(long long n){
    if (n == 0) return "0";

    string binary = "";
    while(n > 0){
        if (n % 2 == 1) binary = "1" + binary;
        else binary = "0" + binary;
        n /= 2;
    }

    int start = 0, end = binary.length() - 1;
    while(start < end){
        if (binary[start] != binary[end]) return false;

        start ++;
        end --;
    }
    return true;
}

    
int main(){
    long long n ;
    cin >> n;
  
    if (is_even(n) & is_palindrome(n)) cout << "YES";
    else cout << "NO";
}

/*
C. Wonderful Number
time limit per test1 second
memory limit per test64 megabytes
Given a number N. Determine whether N is wonderful or not.

Note:

A number is wonderful if this number is odd and its binary representation is palindrome.
Solve this problem using two functions.
Input
Only one line contains a number N (0 ≤ N ≤ 109).

Output
Print "YES" if the number is wonderful otherwise, print "NO".

Examples
input
3
output
YES
input
4
output
NO
*/

#include <iostream>
using namespace std;
    
int main(){
    int k ;
    cin >> k;
    string n ;
    cin >> n;

    int sum = 0;
    for (char ch : n){
        sum  += ch - '0';
    }

    cout << sum;
}

/*
K. Sum Digits
time limit per test2 seconds
memory limit per test256 megabytes
Given a number N and an array A of N digits (not separated by space). Print the summation of these digits.

Input
First line contains a number N (1  ≤  N  ≤  106) number of digits.

Second line contains N digits (0 ≤ Ai ≤ 9).

Output
Print the summation of these digits.

Example
input
5
13305
output
12
Note
First Example :

1 + 3 + 3 + 0 + 5 = 12 .
*/

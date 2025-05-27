#include <iostream>
using namespace std;

void print_digit(long long n){
    if (n < 10){
        cout << n ;
        return;
    }
    print_digit(n / 10);
    cout << " " << n % 10 ;
}
    



int main(){
int test ;
long long n;
cin >> test;

for (int i = 0; i < test ; i++){
    cin >> n;
    print_digit(n);
    cout << endl;
}
}


/*
D. Print Digits using Recursion
time limit per test1 second
memory limit per test256 megabytes
Given a number N. Print the digits of N separated by a space.

Note: Solve this problem using recursion.

Input
First line contains a number T (1 ≤ T ≤ 10) number of test cases.

Next T lines will contain a number N (0 ≤ N ≤ 109).

Output
For each test case print a single line contains the digits of the number separated by space.

Example
input
3
121
39
123456
output
1 2 1 
3 9 
1 2 3 4 5 6 
 */

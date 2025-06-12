using namespace std;
#include<iostream>
#include<cmath>
 
int main(){
    double x ;
    double n ;
    long long sum = 0;

    cin >> x >> n;

    for (int i = 2; i <= n; i+= 2){
        sum +=  pow(x, i);
    }

    cout << sum;

    return 0;
}

/*
M. Lucky Numbers
F. Equation
time limit per test1 second
memory limit per test256 megabytes
Given two numbers X and N. Print the result of the following equation:

S = (X0 - 1) + (X2) + (X4) + (X6) + ............... + (XN)

Note: Solve this problem using function and don't use built-in function.

Input
Only one line contains two numbers X and N (0 ≤ X, N ≤ 10)

Output
Print the equation result S.

Example
inputCopy
5 5
outputCopy
650
Note
First Test :

(50 - 1) + 52 + 54 = 0 + 25 + 625 = 650.
*/

#include <iostream>
#include<iomanip>
using namespace std;

double sum(long long ar[], int start , int end ){
    if (start > end) return 0;
    
    return ar[start] + sum(ar, start + 1, end);
}
    
int main(){
   int n ;
   cin >> n;
   long long ar[n];

   for (int i = 0; i < n; i ++)
     cin >> ar[i];

    cout << fixed << setprecision(6) << sum(ar, 0, n - 1) / n;
}
/*
S. Array Average
time limit per test1 second
memory limit per test256 megabytes
Given a number 𝑁 and an array 𝐴 of 𝑁 numbers. Calculate the average of these numbers.

Note: solve this problem using recursion.

Input
First line contains a number 𝑁 (1≤𝑁≤100) number of elements.

Second line contains 𝑁 numbers (−109≤𝐴𝑖≤109).

Output
Print the calculated average, with 6 digits after the decimal point.

Example
input
5
1 2 3 4 5
output
3.000000
 */

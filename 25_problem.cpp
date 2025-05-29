#include <iostream>
using namespace std;

long long sum (long long ar[], int n){

    if (n == 0) 
        return ar[0];

    return ar[n] + sum(ar, n - 1);
}
    
int main(){
   int n ;
   cin >> n;

   long long ar[n];

   for (int i = 0; i < n; i ++)
     cin >> ar[i];
   
   cout << sum(ar, n - 1);
}


/*
L. Summation
time limit per test1 second
memory limit per test256 megabytes

Given a number N and an array A of N numbers. 
Print the summation of the array elements.

Note: Solve this problem using recursion.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

Output
Print the summation of the N numbers.

Examples
input
4
1 4 2 7
output
14
input
4
5 5 5 5
output
20
 */

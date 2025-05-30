#include <iostream>
using namespace std;

int max_value (long long ar[], int start, int mx, int s){

    if (start >= s){return mx;}
    if (mx < ar[start]) mx = ar[start];

    return max_value(ar, start + 1, mx, s);
}
    
int main(){
   int n ;
   cin >> n;
   long long ar[n];

   for (int i = 0; i < n; i ++)
     cin >> ar[i];

    cout << max_value(ar, 1, ar[0], n);
}
/*
K. Max Number
time limit per test1 second
memory limit per test64 megabytes
Given a number N and an array A of N numbers. 
Print the maximum value in this array.

Note: Solve this problem using recursion.

Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

Output
Print the maximum value in this array.

Example
input
5
1 -3 5 4 -6
output
5
 */

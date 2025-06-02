#include <iostream>
using namespace std;

long long sum_last(long long ar[], int i, int s){
    if (i > s) return 0;
    
    return ar[i] + sum_last(ar, i + 1, s );
}

    
int main(){
   
    int n;
    int s;
    cin >> s >> n;
    long long ar[s];

   for (int j = 0; j < s; j++){
    cin >> ar[j] ;
   }
   
   cout << sum_last(ar, s - n, s-1);
}

/*
M. Suffix Sum
time limit per test1 second
memory limit per test256 megabytes
Given two numbers 𝑁 and 𝑀, and an array 𝐴 of 𝑁 numbers. 
Calculate the sum of the last 𝑀 numbers.

Note: solve this problem using recursion.

Input
First line contains two numbers 𝑁 and 𝑀 (1≤𝑀≤𝑁≤105).

Second line contains 𝑁 numbers (−109≤𝐴𝑖≤109).

Output
Print the sum of the last 𝑀 numbers of the given array.

Example
input
5 3
1 8 2 10 3
output
15
 */

#include <iostream>
using namespace std;

int is_palindrome (long long ar[], long long start, long long end){

    if (ar[start] != ar[end]) 
        return false;
    
    if (start >= end)  
        return true;

    return is_palindrome(ar, start + 1, end  -1);
}
    
int main(){
   long long n ;
   cin >> n;

   long long ar[n];

   for (int i = 0; i < n; i ++)
     cin >> ar[i];

   if (is_palindrome(ar, 0, n - 1)) 
     cout << "YES";
   else 
     cout << "NO";
   
}


/*
R. Palindrome Array
time limit per test1 second
memory limit per test256 megabytes
Given a number N and an array A of N numbers. Determine if it's palindrome or not.

Note:

An array is called palindrome if it reads the same backward and forward, 
for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.

NOTE: Solve it using recursion.

Input
First line contains a number N (1 ≤ N ≤ 105) number of elements.

Second line contains N numbers (1 ≤ Ai ≤ 109).

Output
Print "YES" (without quotes) if A is a palindrome array, otherwise, print "NO" (without quotes).

Examples
inputCopy
5
1 3 2 3 1
output
YES
input
4
1 2 3 4
output
NO
 */

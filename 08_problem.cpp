#include<iostream>
#include<vector>
using namespace std;

bool palindrome(vector<int> &v){
    int left = 0, right = v.size() - 1;

    while (left < right){
        if (v[left] != v[right]) 
            return false;
        
        left ++;
        right --;
    }
    return true;
}

int main(){

int n  ;
cin >> n;
vector<int> v(n);

for (int i = 0 ; i < n ; i++)
    cin >> v[i];

if (palindrome(v)) cout << "YES";
else cout << "NO";

return 0;
}

/*
G. Palindrome Array
time limit per test1 second
memory limit per test256 megabytes
Given a number 𝑁 and an array 𝐴 of 𝑁 numbers. Determine if it's palindrome or not.

Note:

An array is called palindrome if it reads the same backward and forward, 
for example, arrays { 1 } and { 1,2,3,2,1 } are palindromes, while arrays { 1,12 } and { 4,7,5,4 } are not.

Input
First line contains a number 𝑁 (1≤𝑁≤105) number of elements.

Second line contains 𝑁 numbers (1≤𝐴𝑖≤109).

Output
Print "YES" (without quotes) if A is a palindrome array, otherwise, print "NO" (without quotes).

Examples
input
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

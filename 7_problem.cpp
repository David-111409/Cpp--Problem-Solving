#include<iostream>
using namespace std;

int main(){
int n ;
cin >> n;

int k = n;
int rev = 0;

while (k > 0){
    rev = rev * 10 + k % 10;
    k /= 10;
}

cout << rev << endl;
if (rev == n) 
  cout << "YES";
else 
  cout << "NO";

return 0;
}

/*
I. Palindrome
time limit per test1 second
memory limit per test256 megabytes
Given a number 𝑁. Print 2 lines that contain the following respectively:

Print 𝑁 in a reversed order and not leading zeroes.
If 𝑁 is a palindrome number print "YES" otherwise, print "NO.
Note:

A palindrome number is a number that reads the same forward or backward.

For example: 12321, 101 are palindrome numbers, while 1201, 221 are not.

A leading zero is any 0 digit that comes before the first nonzero digit in a number for example : 
numbers (005 , 01 , 0123 , 02 , 000250 ) are leading zeroes but ( 5 , 123 , 20 ,2500 ) not leading zeroes numbers .

Input
Only one line containing a number 𝑁 (1≤𝑁≤107).

Output
Print the answer required above.

Examples
input
12121
output
12121
YES
input
160
output
61
NO
*/

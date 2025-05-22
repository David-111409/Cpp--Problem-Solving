/*
P. Factorial Digits
time limit per test1 second
memory limit per test256 megabytes
Given a number 𝑁. Print the number of digits of 𝑁!.

Input
Only one line contains a number 𝑁 (1≤𝑁≤105).

Output
Print one line that contains the following respectively:

"Number of digits of " + 𝑁 + "! is " + the number of digits.
Example
inputCopy
5
outputCopy
Number of digits of 5! is 3
Note
In the first example:

5! = 5*4*3*2*1 = 120.

And 120 has 3 digits.
*/

#include<iostream>
#include<cmath>
using namespace std;

int main(){
long long n ;
cin >> n;

double sum = 0;

for (long long i = 2; i <= n; i++) sum += log10(i);

cout << "Number of digits of " << n << "! is " << int(sum) + 1;

return 0;
}



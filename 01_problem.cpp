// The description of the problem is below.
#include<iostream>
using namespace std;

int main(){
long long A , B ;
cin >> A >> B;
  
long long big = max(A, B), small = min(A, B),
  
// all is the sum from A to B inclusive
all = (big - small + 1) * (A + B) / 2,

// Evens sum only.
start = small % 2 == 0 ? small : small + 1,
en = big % 2 == 0 ? big : big - 1,
count = 1+ (en - start) / 2,
even = count * (start + en) / 2,

// odds sum only.
start2 = small % 2 == 1 ? small : small + 1, 
en2 = big % 2 == 1 ? big : big - 1,
count2 = 1+ (en2 - start2) / 2,
odd = count2 * (start2 + en2) / 2;

// printing the values.
cout << all << endl;
cout << even << endl;
cout << odd;
  
return 0;
  
}

/*
C. Sum of Range
time limit per test0.5 seconds
memory limit per test256 megabytes
Given 2 numbers A and B. Print three lines that contain the following respectively:

summation of all numbers between A and B (inclusive).
summation of even numbers between A and B (inclusive).
summation of odd numbers between A and B (inclusive).
Input
Only one line contains two numbers A and B (1 ≤ A, B ≤ 109).

Output
Print the answer required above.

Examples
inputCopy
4 6
outputCopy
15
10
5
inputCopy
7 1
outputCopy
28
12
16
*/




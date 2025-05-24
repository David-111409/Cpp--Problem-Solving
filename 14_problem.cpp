#include <iostream>
#include<cmath>
using namespace std;

int main(){

long long a, b, c, d;
cin >> a >> b >> c >> d;

long double left = a * log10(b);
long double right = c * log10(d);

if (left > right) cout << "YES";
else cout << "NO";
   
return 0;
}

/*
Z. Hard Compare
time limit per test1 second
memory limit per test256 megabytes
Given 4 numbers 𝐴,𝐵,𝐶 and 𝐷. If 𝐴𝐵 > 𝐶𝐷 print "YES" otherwise, print "NO".

Input
Only one line containing 4 numbers 𝐴,𝐵,𝐶 and 𝐷 (1≤𝐴,𝐶≤107) , (1≤𝐵,𝐷≤1012)
Output
Print "YES" or "NO" according to the problem above.

Examples
input
3 2 5 4
output
NO
input
5 2 4 2
output
YES
input
5 2 5 2
output
NO
Note
First Example :

32 = 9 and 54 = 625 then 9 < 625 so the answer is NO.

Second Example :

52 = 25 and 42 = 16 then 25 > 16 so the answer is YES.

Third Example :

52 = 25 and 52 = 25 then 25 = 25 so the answer is NO.*/

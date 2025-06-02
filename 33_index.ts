#include <iostream>
using namespace std;

int length_path(long long n){

    if (n == 1) return 1;

    if (n % 2 == 1) return 1 + length_path(3 * n + 1);

    return 1 + length_path(n / 2);
}
    
int main(){
   long long n ;
   cin >> n;

   cout << length_path(n) << endl;  
}

/*
Q. 3n + 1 sequence
time limit per test1 second
memory limit per test256 megabytes
Given a number 𝑛, you should print the length of the 3𝑛+1 sequence starting with 𝑛.

The sequence is constructed as follows:

If the number 𝑛 is odd, the next number will be 3𝑛+1.
If the number 𝑛 is even, the next number will be 𝑛/2.
For example, the 3𝑛+1 sequence of 3 is {3,10,5,16,8,4,2,1} and its length is 8.

Note: Solve this problem using recursion.

Input
Only one line containing a number 𝑛 (1≤𝑛≤105).

Output
Print the length of 3𝑛+1 sequence of the given 𝑛.

Examples
input
1
output
1
input
2
output
2
input
3
output
8
 */

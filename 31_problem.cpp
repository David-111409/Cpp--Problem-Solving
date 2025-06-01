#include <iostream>
using namespace std;

int log2(long long n){
    if (n == 1) return 0;

    return 1 + log2( n / 2);
}
    
int main(){
   long long n;
   cin >> n;
   
   cout << log2(n);
}

/*
P. Log2
time limit per test1 second
memory limit per test256 megabytes
Given a number 𝑁. Print ⌊𝑙𝑜𝑔2(𝑁)⌋.

Note: Solve this problem using recursion.

Input
Only one line containing a number 𝑁 (1≤𝑁≤1018).

Output
Print the answer required above.

Examples
inputCopy
1
output
0
input
8
output
3
 */

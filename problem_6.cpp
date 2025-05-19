#include<iostream>
using namespace std;
#include<vector>
int main(){
    
unsigned int n ;
cin >> n;
vector<int> ar(n);

for (int i = 0; i < n; i++){
  
    if (i > 1){
        ar[i] = ar[i-1] + ar[i- 2];
        cout << ar[i]  << " ";
    }

    else
    {
        ar[i] = i;
        cout << ar[i] << " ";
    }
}

}

/*
Y. Easy Fibonacci
time limit per test1 second
memory limit per test256 megabytes
Given a number N. Print first N numbers of the Fibonacci sequence.

Note: In order to create the Fibonacci sequence use the following function:

fib(1) = 0.
fib(2) = 1.
fib(n) = fib(n - 1) + fib(n - 2).
Input
Only one line containing a number N (1 ≤ N ≤ 45).

Output
Print the first N numbers from the Fibonacci Sequence .

Example
input
7
output
0 1 1 2 3 5 8 
*/

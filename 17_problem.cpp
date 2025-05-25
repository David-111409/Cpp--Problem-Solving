/*E. Swap
time limit per test1 second
memory limit per test64 megabytes
Given two numbers X and Y. Print X and Y after swapping them.

Note: Solve this problem using function.

Input
Only one line contains two numbers X and Y (0 ≤ X, Y ≤ 105).

Output
Print X and Y separated by a space after swapping.

Example
input
5 2
output
2 5
*/
#include <iostream>
using namespace std;

void swap(int &a, int &b){
    int temp = a;
    a = b;
    b = temp;
}

int main(){

long long a , b ;
cin >> a >> b;

swap(a, b);
cout << a << " " << b;
   
return 0;
}


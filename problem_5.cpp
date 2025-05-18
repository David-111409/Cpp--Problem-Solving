#include<iostream>
using namespace std;
#include<algorithm>

int main(){
int n;
cin >> n;

int ar[n];
for (int i = 0 ; i < n; i++) cin >> ar[i];

sort(ar, ar + n);

for (int n : ar) cout << n << " ";
}

/*
H. Sorting
time limit per test1 second
memory limit per test64 megabytes
Given a number N and an array A of N numbers. Print the numbers after sorting them.

Note:

Don't use built-in-functions.
for more information watch : https://www.youtube.com/watch?v=EnodMqJuQEo.
Input
First line contains a number N (0 < N < 103) number of elements.

Second line contains N numbers ( - 100 ≤ Ai ≤ 100).

Output
Print the numbers after sorting them.

Examples
input
3
3 1 2
output
1 2 3 
input
4
5 2 7 3
output
2 3 5 7 
*/

#include <iostream>
using namespace std;

void even_index(long long ar[], int index){
    if (index == 0){
        cout << ar[0];
        return ;
    } 
  
    if (index % 2 == 0) cout << ar[index] << " ";
  
    even_index(ar, index - 1);
}
    
int main(){
   int n ;
   cin >> n;
   long long ar[n];

   for (int i = 0; i < n; i ++)
     cin >> ar[i];

    even_index(ar, n - 1);
    
}
/*
F. Print Even Indices

time limit per test1 second
memory limit per test256 megabytes
Given a number N and an array A of N numbers.
Print the numbers in even indices in a reversed order.

Note:

Assume array A is 0-based indexing.
Solve this problem using recursion.
Input
First line contains a number N (1 ≤ N ≤ 103) number of elements.

Second line contains N numbers ( - 109 ≤ Ai ≤ 109).

Output
Print numbers in even indices in a reversed order separated by spaces.

Examples
input
4
1 4 2 7
output
2 1 
input
7
1 5 8 2 3 9 11
output
11 3 8 1
 */

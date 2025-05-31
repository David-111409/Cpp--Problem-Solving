#include <iostream>
using namespace std;

void count_zeros_print(long long ar[], int size){
    int zeros_count = 0;
    
    for (int i = 0; i < size; i++) {
        if (ar[i] != 0) cout << ar[i] << " ";
        else zeros_count ++;
    }
  
    for (int j = 0; j < zeros_count; j++) cout << 0 << " " ;

}
    
int main(){
   int n ;
   cin >> n;
   long long ar[n];

   for (int i = 0; i < n; i ++)
     cin >> ar[i];

    count_zeros_print(ar, n );
    
}
/*
N. Shift Zeros
time limit per test1 second
memory limit per test256 megabytes
Given an array 𝐴 of size 𝑁. Print the array elements after shifting all zeroes in array 𝐴 to the right.

Note: Solve this problem using function.

Input
First line will contain a number 𝑁 (1≤𝑁≤103) number of elements.

Second line will contain 𝑁 numbers (0≤𝐴𝑖≤103).

Output
Print the array after shifting right all its zeros.

Examples
input
4
2 0 0 5
output
2 5 0 0 
input
5
1 5 0 7 4
output
1 5 7 4 0
 */

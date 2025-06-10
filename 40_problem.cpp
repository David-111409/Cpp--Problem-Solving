#include<iostream>;
using namespace std;
 
void min_max(long long ar[], int n){
    long long max = ar[0], min = ar[0];
  
    for (int i = 1; i < n; i++){
        if (ar[i] < min) min = ar[i];
        if (ar[i] > max) max = ar[i];
    }
  
    cout << min << " " << max;  
}
    
int main(){
    int size ;
    cin >> size;
    long long ar[size] ;
    
    for (int j = 0; j < size; j++){
        cin >> ar[j];
    }

    min_max(ar, size);
 
    return 0;
}

/*
G. Max and MIN
time limit per test1 second
memory limit per test64 megabytes
Given an array A of size N. Print the minimum and the maximum number in the array.

Note: Solve this problem using function.

Input
First line will contain a number N (1 ≤ N ≤ 103) number of elements.

Second line will contain N numbers (0 ≤ Xi ≤ 105).

Output
Print the minimum and the maximum number separated by a space.

Example
input
5
10 13 95 1 3
output
1 95
*/

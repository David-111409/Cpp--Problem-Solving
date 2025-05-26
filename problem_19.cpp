#include <iostream>
using namespace std;

void print(int n){
  
    if (n == 1) {
        cout << 1; 
        return;
    }

    cout << n << " ";
    print(n -1);
}



int main(){

int n ;
cin >> n;
  
print(n);
    
return 0;
}


/*
C. Print from N to 1

time limit per test1 second
memory limit per test64 megabytes

Given a number N. Print all numbers from N to 1 
separated by a single space.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print from N to 1 separated by a single space.

Example
input
4
output
4 3 2 1

Note
Make sure don't print any leading or trailing spaces.
 */

#include <iostream>
using namespace std;

void print(int n){
        if (n == 1){
            cout << 1 << endl;
            return;
        }

        print(n -  1);
        cout << n << endl;
}
    



int main(){

int n ;
cin >> n;
  
print(n);
    
return 0;
}


/*
B. Print from 1 to N

time limit per test1 second
memory limit per test64 megabytes

Given a number N. Print numbers from 1 to N in separate lines.

Note: Solve this problem using recursion.

Input
Only one line containing a number N (1 ≤ N ≤ 103).

Output
Print N lines according to the required above.

Example
input
5
output
1
2
3
4
5
 */

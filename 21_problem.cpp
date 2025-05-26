#include <iostream>
using namespace std;

void print(int n){
        if (n == 0)
            return;
        
        print(n -  1);
        cout << "I love Recursion" << endl;
}

int main(){
int n ;
cin >> n;

print(n);
    
return 0;
}


/*
A. Print Recursion

time limit per test1 second
memory limit per test256 megabytes

Given a number 𝑁. Print "I love Recursion" 𝑁 times.

Note: Solve this problem using recursion.

Input
Only one line containing a number 𝑁 (1≤𝑁≤100) .

Output
Print "I love Recursion" 𝑁 times.

Example
input
3
output
I love Recursion
I love Recursion
I love Recursion
 */

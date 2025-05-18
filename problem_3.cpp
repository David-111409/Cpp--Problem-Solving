#include<iostream>
using namespace std;

int main(){
int n ;
cin >> n ;

for (int i = 1; i <= n; i++){
    
    for (int j = i ; j > 0 ; j--) cout << "*";
    
    cout << endl;
}

return 0;
  
}

/*
Given a number N. Print a left angled triangle that has N rows.

For more clarification see the example below.

Input
Only one line containing a number N (1 ≤ N ≤ 99).

Output
Print the answer according to the required above.

Example
inputCopy
4
outputCopy
*
**
***
****
Note
Don't print any extra spaces after symbol " * ".
*/

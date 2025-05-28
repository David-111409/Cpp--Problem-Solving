int main(){

int n ;
cin >> n ;

for (int i = n; i > 0; i--){

    for (int j = 0 ; j < i ; j++) cout << "*";
    
    cout << endl;
}

return 0;
  
}

/*
P. Shape1
time limit per test1 second
memory limit per test256 megabytes
Given a number N. Print a face down right angled triangle that has N rows.

For more clarification see the example below.

Input
Only one line containing a number N (1 ≤ N ≤ 99).

Output
Print the answer according to the required above.

Example
inputCopy
4
outputCopy
****
***
**
*
Note
Don't print any extra spaces after symbol " * ".
*/

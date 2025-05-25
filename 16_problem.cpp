
 #include <iostream>
using namespace std;
 
float sum(float a, float b){
    return a + b;
}
 
int main(){
 
float a, b;
cin >> a >> b;
cout << sum(a, b);
   
return 0;
}
/*A. Add
time limit per test1 second
memory limit per test64 megabytes
Given two numbers X and Y, Print their summation.

Note: Solve this problem using function.

Input
Only one line contains two numbers X and Y (0 ≤ X, Y ≤ 105).

Output
Print the summation value.

Example
input
5 2
output
7
*/

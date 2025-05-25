#include<iostream>
using namespace std;
#include<cmath>
#include<iomanip>

int main(){

int a , b, c ;
cin >> a >> b >> c;
int mx = max(max(a, b), c);
int sum = a + b + c;
int sumOfTwo = sum - mx;

if (sumOfTwo > mx) {
    cout << "Valid" << endl;
    float s = sum / 2;
    double area = sqrt(s * (s - a) * (s -b) * (s - c));

    cout << fixed << setprecision(6) << area;
}

else cout << "Invalid" ;

return 0;
  
}

/*
S. Is Triangle
time limit per test1 second
memory limit per test256 megabytes
Given three numbers A, B and C that donate the lengths of the three sides of a triangle.
Determine whether this triangle is valid or not and if it is valid print its area.

Input
Only one line contains three numbers A, B and C (1 ≤ A, B, C ≤ 103).

Output
If the three sides preform a triangle print "Valid" and the area of the triangle in separate lines otherwise, print "Invalid".

Don't print any extra spaces.

Examples
inputCopy
7 10 5
outputCopy
Valid
16.248077
inputCopy
3 4 1
outputCopy
Invalid
Note
Your answer will be considered correct if its absolute or relative error does not exceed 10 - 4 .
*/


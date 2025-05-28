#include <iostream>
#include<algorithm>
using namespace std;

string binary(long long n){
    if (n  <= 1) return to_string(n);
    return binary(n / 2) + (n % 2 == 0? "0" : "1");
}
    



int main(){
    int test ;
    long long N;
    cin >> test;

    for (int i = 0; i < test; i++){
        cin >> N;
        cout << binary(N) << endl;
    }
}


/*
E. Base Converssion
time limit per test1 second
memory limit per test256 megabytes
Given a number N. Print the binary equivalent of N.

Note: Solve this problem using recursion.

Input

First line contains a number T (1 ≤ T ≤ 104) number of test cases.

Next T lines will contain a number N (1 ≤ N ≤ 109).

Output
For each test case print a single line contains the answer according to the required above.

Example

input
2
10
3
output
1010
11
 */

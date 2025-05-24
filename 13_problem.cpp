#include <iostream>
#include<vector>
using namespace std;

int main(){

    char sym; cin >> sym;
    int n ; cin >> n;
    vector<int> ar(n);
    
    for (int i = 0; i < n; i ++) cin >> ar[i];
    for (int ele : ar) {
        for (int j = 0; j < ele ; j++) {
            cout << sym;
        }
        cout << endl;
    }

return 0;
}

/*
N. Numbers Histogram
time limit per test1 second
memory limit per test256 megabytes
Given 3 lines of input described as follow:

First line contains a symbol 𝑆.
Second line contains a number 𝑁.
Third line contains 𝑁 numbers.
For each number 𝑋𝑖 in the 𝑁 numbers print a new line that contains the symbol 𝑆 repeated 𝑋𝑖 time.

Input
The first line contains a symbol 𝑆 can be (+,−,∗,/).

The second line an number 𝑁 (1≤𝑁≤50).

The third line contains 𝑁 numbers (1≤𝑋𝑖≤100).

Output
Print the answer required above.

Example
input
+
5
5 2 4 3 7
output
+++++
++
++++
+++
+++++++
Note
Don't print any extra spaces after symbol 𝑆.*/

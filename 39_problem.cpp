#include <iostream>
using namespace std;

void repeat(int n , char chr){
    
    for (int i = 0; i < n; i++){
        if (i < n - 1)
            cout << chr << " ";

        else cout << chr << endl;
    }
}
    
int main(){

    int test;
    cin >> test;
    int n ;
    char chr ;
    for (int i = 0; i < test ; i ++){
        cin >> n;
        cin >> chr;
        repeat(n, chr);
    }

    return 0;
    
}

/*
H. N Times
time limit per test1 second
memory limit per test256 megabytes
Given a number 𝑁 and a character 𝐶. Print the character(𝐶) 𝑁 times.

Note: Solve this problem using function.

Input
The first line contains a number 𝑇 (1≤𝑇≤50) the number of test cases.

Next 𝑇 lines contains a number 𝑁 and a character 𝐶 (1≤𝑁≤100).

Output
Print 𝑇 lines, for every line print the character(𝐶) 𝑁 times separated by space.

Examples
input
2
1 n
5 O
output
n 
O O O O O 
input
1
8 z
output
z z z z z z z z 
*/

#include<iostream>;
#include<algorithm>;
using namespace std;
 
long long require(int n, int a, int b){

    long long sum = 0;

    for (int i = 1; i <= n ; i++){

        long long sumOfDigits = 0;

        for (char ch: to_string(i))
            sumOfDigits += ch - '0';
        
        if (sumOfDigits >= a && sumOfDigits <= b)
            sum += i;
    }

    return sum;
}
    
int main(){
    int n , a, b;
    cin >> n >> a >> b;

    cout << require(n, a, b);
    return 0;
}

/*
U. Some Sums
time limit per test2 seconds
memory limit per test256 megabytes
Given three numbers N, A, B. Print the summation of the numbers between 1 and N whose sum of digits is between A and B inclusive.

Input
Only one line containing three numbers N, A, B (1 ≤ N ≤ 104, 1 ≤ A ≤ B ≤ 36).

Output
Print a single line contains the answer according to the required above.

Examples
input
20 2 5
output
84
input
10 1 2
output
13
input
100 4 16
output
4554
Note
In the first simple:

Among the numbers not greater than 20, the numbers whose sums of digits are between 2 and 5, are: 2,3,4,5,11,12,13,14 and 20.

So the answer is: 84.
*/

using namespace std;
#include<iostream>
#include<string>
 
int sum_digits(string n){
    long long sum = 0;
    for (char digit : n){
        sum += digit - '0';
    }
    return sum;
}

int main(){
    string n ;
    cin >> n;

    cout << sum_digits(n) << endl;
    return 0;
}

/*
E. Count
time limit per test2 seconds
memory limit per test64 megabytes
Given a string S. Print the summation of its digits.

Input
Only one line contains a string S (1 ≤ |S| ≤ 106) where |S| is the length of the string.

It's guaranteed that S contains only digits from 0 to 9.

Output
Print the answer required above.

Example
input
351
output
9
Note
First Test :

3 + 5 + 1 = 9 .
*/

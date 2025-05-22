#include<iostream>
#include<vector>
#include<iomanip>

using namespace std;

float avg(const vector<float> &arr){
    
    float sum = 0;

    for (float num : arr) sum += num;

    return sum / arr.size();
}

int main(){
  
int n ;
cin >> n;
vector<float> v(n);

for (int i = 0 ; i < n; i++) cin >> v[i];
float result = avg(v);
  
cout << fixed << setprecision(6) << result;

return 0;
}

/*
J. Average
time limit per test1 second
memory limit per test256 megabytes
Given an array 𝐴 of size 𝑁. Print the average(mean) of the array numbers.

Note: Solve this problem using function.

Input
First line will contain a number 𝑁 (1≤𝑁≤104) length of the array.

Second line will contain 𝑁 numbers (1≤𝐴𝑖≤103).

Output
Print the average(mean) of the array with 6 digits after the decimal point.

Examples
inputCopy
3
1.0 2.0 5.0
output
2.6666667
input
4
1.0 7.0 4.0 9.0
output
5.2500000
*/

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
int n;
int k ;
cin >> k;
cin >> n;
int ar[n] ;
int sum = 0;
int sum2;
int m = k - 1;

for (int i= 0 ; i < n; i++){
    cin >> ar[i];
    if (i < k){
        sum += ar[i];
        sum2 = sum;
    }
    else {
        sum2 += ar[i] - ar[i-k];
        if (sum2 >= sum){
            sum = sum2;
            m = i;
        }
    }
}

cout << m -k + 1 << " " << m << " " << sum;
return 0;
}

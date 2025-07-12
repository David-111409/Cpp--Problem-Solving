// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
 
    int n;
    cin >> n;
    int ar[n];
    
    for (int i = 0; i < n; i++)
        cin >> ar[i];
        
    int minLeft = ar[1] - 1;
    int res = 1e9;
    for (int j = 2; j < n; j++){
        minLeft = min(minLeft, ar[j-1] - (j-1) );
        int current = minLeft + ar[j] + j;
        res = min(res, current);
    }   
    
    cout << res;
    return 0;
}

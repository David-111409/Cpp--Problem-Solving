#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[n];
    
    int val = true;
    for (int i = 0; i < n; i++){
        cin >> ar[i];
        if (i > 0 && ar[i] < ar[i-1]) val = false;
    }
    
    if(val) cout << "YES";
    else cout<<"NO";
        
    return 0;
}

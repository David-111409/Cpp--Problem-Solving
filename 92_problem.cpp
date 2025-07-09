#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[n];
    
    for (int i = 0; i < n; i++){
        cin >> ar[i];
    }
    
    int h = n /2;
    bool val = true;
    
    for (int i = 0; i < h; i++){
        if (ar[i] != ar[n-i-1]){
            val = false;
            break;
        }
    }
    
    if (val) cout << "YES";
    else cout << "NO";
        
    return 0;
}


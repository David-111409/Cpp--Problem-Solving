#include <iostream>
using namespace std;

int main() {
    int n, val = true;
    
    cin >> n;
    
    if (n <= 1) val = false;
    
    for (int i = 2; i < n; i++) {
        if (n % i == 0) val = false;
    }
    
    if (val) cout << "YES";
    else cout << "NO";
    
    return 0;
}


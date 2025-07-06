#include <iostream>
using namespace std;

int main() {
    int n, val ;
    cin >> n;
    
    for (int j = 2; j <= n; j++){
        val = true;
        
    for (int i = 2; i < j; i++) {
        if (j % i == 0) {
          val = false;
          break;
        }
    }
    
    if (val) {
        if (j == 2) cout << j ; 
        else cout << ", " << j;
    }
    
    }
    
    return 0;
}

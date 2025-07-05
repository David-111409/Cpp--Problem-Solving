#include <iostream>
using namespace std;

int main() {
    int a = 0, b = 1;
    int n ; 
    cin >> n;
    cout << a << " " << b << " " ;
  
    for (int i = 2; i < n ; i++){
        int c = a + b;
        a = b;
        b = c;
        cout << c << " " ;
    }
  
    return 0;
}

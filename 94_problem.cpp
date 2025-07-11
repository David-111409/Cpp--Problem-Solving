// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int n , v, value, q;
  
    int ar[501] ;
    fill(ar, ar + 500, -1);
  
    cin >> n;
    for (int i = 0; i < n; i++){
        cin >> v;
        ar[v] = i;
    }
    
    cin >> q;
    for (int i = 0; i < q; ++i){
        cin >> value;
        cout << ar[value] << "\n";
    }

    
    return 0;
}

// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
    int min1 , min2 , min3 ;
    min1 = min2 = min3 = 1e9;
    
    int n;
    cin >> n;
    int ar[n];
    
    for (int i = 0; i < n; i++){
        cin >> ar[i];
      
        if (ar[i] < min1){
            min3 = min2;
            min2 = min1;
            min1 = ar[i];
        }
          
        else if (ar[i] < min2){
            min3 = min2;
            min2 = ar[i];
        }
          
        else if (ar[i] < min3){
            min3 = ar[i];
        }
    }
    cout << min1 << " " << min2 << " " << min3 ;
    
    return 0;
}

#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[n];
    
    for (int i = 0; i < n; i++)
        cin >> ar[i];
        
    int i1 , i2 ;
    int a, b ;
    
    if (ar[0] > ar[1]){
        i1 = 0; i2 = 1;
        a = ar[0]; b = ar[1];
    }
    else {
        i1 = 1; i2 = 0;
        a = ar[1]; b = ar[0];
    }
    
    for(int i = 2; i < n; i++){
       if (a < ar[i]){
           i2 = i1;
           i1 = i;
           b = a;
           a = ar[i];
       }
       else if (b < ar[i]){
           i2 = i;
           b = ar[i];
       }
    }
    
    cout << a << " " << b << endl;
    cout << i1 << " " << i2 ;
    
    return 0;
}

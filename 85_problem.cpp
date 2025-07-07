#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[n];
    
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    
    int max1 = ar[0], ind1;
   
    for (int k = 1 ; k < n; k++){
        if (max1 < ar[k]){
            max1 = ar[k];
            ind1 = k;
        }
    }
    
    ar[ind1] = -1000000;
    
    int max2 = ar[0];
    for(int m = 1; m < n; m++){
        if (max2 < ar[m])
            max2 = ar[m];
    }
  
    cout << max1 << " ";
    cout << max2 << endl;
    
    return 0;
}

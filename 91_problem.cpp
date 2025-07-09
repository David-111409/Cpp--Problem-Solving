#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[n];
    
    int minVal = 3000, maxVal = -1;
    for (int i = 0; i < n; i++){
        cin >> ar[i];
        if (ar[i] < minVal)
            minVal = ar[i];
        
        else if (maxVal < ar[i]) 
            maxVal = ar[i];
    }
    
   
   
    
    if (minVal != maxVal){

    for (int i = 0; i< n; i++){
        if (ar[i] == maxVal)
            ar[i] = minVal;
        
        else if (ar[i] == minVal)
            ar[i] = maxVal;
    }
    }
    
   
   for (int i = 0 ; i < n; i++) {
       if (i) cout << " ";
       cout << ar[i];
   }
        
    return 0;
}


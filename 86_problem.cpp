#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[n];
    
    for (int i = 0; i < n; i++)
        cin >> ar[i];
    
    int max1 , max2;
    if (ar[0] >= ar[1]){
        max1 = ar[0];
        max2 = ar[1];
    }
    else 
        {
            max1 = ar[1];
            max2 = ar[0];
        }
    
    for(int i = 2; i < n; i++){
        if (max1 <= ar[i]){
            max2 = max1;
            max1 = ar[i];
        }
        else if (max2 <= ar[i])
            max2 = ar[i];
    }
    
    cout << max1 << " ";
    cout << max2 << endl;
    
    return 0;
}

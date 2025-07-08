#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[n];
    int r[151] = {0};
  
    for (int i = 0; i < n; i++)
    {
        cin >> ar[i];
        ++r[ar[i]];
    }
    
    int maxCount = 0, value;
  
    for (int i = 0 ; i < 151; i++){
        if (r[i] > maxCount){
            maxCount = r[i];
            value = i;
        }
    }
  
    cout << value << " " << maxCount << " Times";
    return 0;
}

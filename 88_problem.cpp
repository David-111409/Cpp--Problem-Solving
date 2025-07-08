#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;
    int ar[n];
    
    for (int i = 0; i < n; i++)
        cin >> ar[i];
        
   int h = n / 2;
   for (int i = 0; i < h; i++){
       swap(ar[i], ar[n-i-1]);
   }
  
    for (int i = 0; i < n; i++) 
      cout << ar[i] << " " ;
  
    return 0;
}

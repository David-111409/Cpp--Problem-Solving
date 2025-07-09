// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
   int freq[771] = {0};
   int n;
   cin >> n;
   int ar[n];
   
   for (int i = 0; i < n ; i++){
       cin >> ar[i];
       freq[ar[i] + 500]++;
   }
   
   int ind = 0;
   for(int i = 1;  i < 771 ; i++){
           if (freq[i] > freq[ind])
               ind = i;
   }
   cout <<  ind - 500 << " repteated " << freq[ind] << " times";

    return 0;
}

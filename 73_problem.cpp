#include <iostream>
#include<cmath>
using namespace std;

int main() {
    int n ;
    int t ;
    int p ;
    int Num;
    int res;
    
    cin >> t;
    while (t--){
        p = 1;
        res = 0;
        cin >> n;
    while (n--)
    {
        cin >> Num;
        res += pow(Num, p);
        p++;
    }
      
    cout << res << "\n";
      
    }
    return 0;
}

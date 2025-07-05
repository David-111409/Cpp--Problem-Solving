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
    for (int j = 0; j < t; j++)
    {
        p = 1;
        res = 0;
        cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> Num;
        res += pow(Num, p);
        p++;
    }
      
    cout << res << "\n";
      
    }
    return 0;
}

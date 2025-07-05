#include <iostream>
using namespace std;

int main() {
    int n, m , w;
    int count = 0;
    cin >> n >> m >> w;
    for (int i = 1; i <= n; i++){
        for (int j = i; j<= m; j++){
         int m = i + j;
         if (m <= w && m >= 1){
             count += w - m + 1;
         }
        }
    }
  
    cout << count ;
    return 0;
}

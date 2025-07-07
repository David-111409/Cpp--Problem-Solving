#include <iostream>
using namespace std;

int main() {
    int N ;
    int a, b ;
  
    cin >> N >> a >> b;
    
    int bigSum = 0;
    int sum = 0;
  
    for (int i = 1 ; i <= N; i++){
        sum = 0;
        int j = i;
        
        while(j){
            sum += j % 10;
            j = j / 10;
        }
        // cout << i << " > " << sum << endl;
        if (sum >= a && sum <= b) 
            bigSum += i;
    }
    
    cout << bigSum << endl;
    
    return 0;
}

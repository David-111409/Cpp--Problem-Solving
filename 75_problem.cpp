#include <iostream>
using namespace std;

int main() {
    int a ;
    int b;
    int count;
    int sum ;
    cin >> a >> b;
    cin >> sum;
  
    for (int i = 1; i < a; i++){
        int j = sum - i;
        if (j >= 1 && j <= b) 
            count++;
    }
  
    cout << count;
  
    return 0;
}

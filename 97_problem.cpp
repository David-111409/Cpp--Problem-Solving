// By Basel Bairkdar https://www.facebook.com/baselbairkdar - modified
#include<iostream>
using namespace std;

int main() {
	int n;
	int value;
    int digit = 0;
    int ar[10] = {0};
	cin >> n;
    
    for (int i = 0; i < n; i++){
        cin >> value;
        
        if (value == 0) ++ar[0];
        
        while (value ){
            ++ar[value % 10];
            value = value / 10;
        }
    }
    
    for (int i = 0; i < 10; i++)
        cout << i << " " << ar[i] << "\n";
    
    
	return 0;
}

#include <iostream>
using namespace std;

// Dr.Mostafa Saad Course Homework

int main()
{
    // summing the last 3 digits of a number
    int n;
    cin >> n;
  
    int k = n % 1000;
    int sum = 0;
  
    while (k > 0){
        sum +=  k % 10;
        k = k / 10;
    }
    
    cout << sum << endl;
    
    return 0;
}

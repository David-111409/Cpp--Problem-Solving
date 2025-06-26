#include <iostream>
using namespace std;

// Dr.Mostafa Saad Course Homework

int main()
{
    // Making the modulus without using %
    
    int n;
    int m;
  
    cin >> n >> m;
  
    int result = n - (n / m) * m;
  
    cout << result << endl;
  
    return 0;
}

#include <iostream>
using namespace std;

// Dr.Mostafa Saad Course Homework

int main()
{
    // printing the 4th of the number from the right side.

    int n ;
    cin >> n;
    // another solution: >>
    // int k = n % 10000;
    // cout << k / 1000 << endl;
    
    cout << (n / 1000) % 10;
    return 0;
}

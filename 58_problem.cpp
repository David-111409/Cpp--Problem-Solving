#include <iostream>
using namespace std;

// Dr.Mostafa Saad Course Homework

int main()
{
    // Making a program that prints 7 if the integer is odd and prints 100 if it is even.

    int n ;
    cin >> n;

    cout << (1 - (n % 2)) *  100 + (n % 2) * 7 << endl;

    return 0;
}

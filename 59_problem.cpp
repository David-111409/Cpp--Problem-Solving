#include <iostream>
using namespace std;

// Dr.Mostafa Saad Course Homework

int main()
{
   // Making a program that take n as a number of days and gives output: years months days 
   // month = 30 days , year = 360 days

    int n ;
    cin >> n;

    int years = n / 360;
    int month = (n % 360) / 30;
    int days = n % 30;
    // int days = n - years * 360 - month * 30;
    
    cout << years << " ";
    cout << month << " ";
    cout << days << endl;

    return 0;
}

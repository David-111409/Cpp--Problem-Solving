#include <iostream>
using namespace std;

// Dr.Mostafa Saad Course Homework

int main()
{
    int a, b, c;
    cin >> a >> b >> c;

    if (a < b && b < c) 
        cout << a << " " << b << " " << c << endl; 

    else if (b < a && a < c)
        cout << b  << " " << a  << " " << c << endl;
    
    else if (b < c && c < a) 
        cout << b << " " << c << " " << a << endl;
    
    else if (c < a && a < b) 
        cout << c << " " << a << " " << b << endl;
    
    else  if (c < b && b < a)
        cout << c << " " << b << " " << a << endl;

    else 
        cout << a << " " << c << " " << b << endl;
    
    return 0;
}

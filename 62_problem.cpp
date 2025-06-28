#include <iostream>
using namespace std;

// Dr.Mostafa Saad Course Homework

int main()
{
    int a , b;
    cin >> a >> b;

    bool a_is_even = a % 2 == 0;
    bool b_is_even = b % 2 == 0;

    if (!a_is_even && !b_is_even) 
        cout << a * b << endl;

    else if (a_is_even && b_is_even)
        cout << a / b << endl;

    else if (!a_is_even && b_is_even)
        cout << a + b << endl;
    
    else if (a_is_even && !b_is_even)
        cout << a - b << endl;
    
    return 0;
}

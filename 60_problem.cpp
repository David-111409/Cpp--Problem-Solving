#include <iostream>
using namespace std;

// Dr.Mostafa Saad Course Homework

int main()
{
    int n;
    cin >> n;

    if (n % 2 == 0)
        cout << n % 10 << endl;

    else 
    {
        if (n < 1000)
            cout << n % 100 << endl;

        else if (n >= 1000 && n < 1000000)
            cout << n % 10000 << endl;

        else
            cout << -1 * n << endl;
    }

    return 0;
}

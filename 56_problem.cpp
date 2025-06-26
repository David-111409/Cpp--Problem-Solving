#include <iostream>
using namespace std;

// Dr.Mostafa Saad Course Homework

int main()
{
    // printing the fraction part of division.

    float n, m;

    cin >> n >> m;

    cout << (n / m) - int(n / m) << endl;

    return 0;
}

#include <iostream>
using namespace std;

// Dr.Mostafa Saad Course Homework

int main()
{
    int a  , b , c;
    cin >> a >> b >> c;
    if (a < b) swap(a, b);
    if (b < c) swap(b, c);
    if (a < b) swap(a, b);

    if (a < 100 ) cout << a << endl;
    else if (b < 100) cout << b << endl;
    else if (c < 100) cout << c << endl;
    else cout << -1 << endl;

    return 0;
}

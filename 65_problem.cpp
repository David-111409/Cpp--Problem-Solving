#include <iostream>
using namespace std;

// Dr.Mostafa Saad Course Homework

int main()
{
    int x, a, b, c, d, e;
    cin >> x >> a >> b >> c >> d >> e;

    int less_or_equal = 0;

    if (a <= x) less_or_equal ++;
    if (b <= x) less_or_equal ++;
    if (c <= x) less_or_equal ++;
    if (d <= x) less_or_equal ++;
    if (e <= x) less_or_equal ++;

    cout << less_or_equal << " " << 5 - less_or_equal << endl;
    
    return 0;
}

#include <iostream>
using namespace std;

// Dr.Mostafa Saad Course Homework

int main()
{
    int  s1, e1, s2, e2, mx, mn;
    cin >> s1 >> e1 >> s2 >> e2 ;

    if (s1 < s2) {
        mx = s2;
    }
    else {
        mx = s1;
    }

    if (e1 < e2){
        mn = e1;
    }
    else {
        mn = e2;
    }

    if (mx <= mn){
        cout << mx << " " << mn << endl;
    }
    else {
        cout << -1 << endl;
    }

    return 0;
}

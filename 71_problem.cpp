#include <iostream>
using namespace std;

// Dr.Mostafa Saad Course Homework

int main()
{
    // int n ;
    // cin >> n;
    // int i = 1;
    // while(i++ <= n){
    //     if (i % 3 == 0) cout << i << endl;
    // }

    // int x , y;

    // cin >> x >> y;

    // int result = 1, i = 0;

    // while (i++ < y){
    //     result *= x;
    // }

    // cout << result << endl;

    // long long n;
    // cin >> n;
    
    // int count = 1;
    // if (n < 0) n *= -1;
    // while(n > 9){
    //     n /= 10;
    //     count ++;
    // }
    // cout <<"The number of digits : " << count << "\n";

    // int t, n;
    // cin >> t;

    // while (t-- > 0){

    //     cin >> n;

    //     cout << "sum from 1 to " << n << " = " << n * (n + 1) / 2 << endl;

    // }

    // int x, y;
    // cin >> x >> y;

    // while (x <= y){
    //     cout << x << endl;
    //     x++;
    // }

    // int n; char x;
    // cin >> n >> x;
    // while (n--) {
    //     cout << x ;
    // }
    // cout << endl;

    // int n ; 
    // cin >> n;
    // int i = 0, k = 0;
    // while(i++ < n ){
    //     k = i;
    //     while(k--) 
    //         cout << "* " ;
    //     cout << "\n";
    // }

    int n ;
    cin >> n;
    int i;
    while(n){
        i = n;
        while(i--){
            cout << "* " ;
        }
        cout << "\n";
        n--;
    }

    return 0;
}

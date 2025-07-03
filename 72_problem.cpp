#include <iostream>
#include <limits>
#include <string>
using namespace std;

// Dr.Mostafa Saad Course Homework

int main()
{
    // int n ;
    // cin >> n;
    // int k = n;
    // int i , j = 1, m = 1;
    // while(k--){
    //     m = j;
    //     i = k;
    //     while(i){
    //         cout << " " ;
    //         i--;
    //     }
    //     while(m){
    //         cout << "*" ;
    //         m--;
    //     }
    //     cout << "\n";
    //     j += 2;
    // }

    // k = n;

    // while(k--){
    //     m = k * 2 + 1;
    //     i = n - k - 1;
    //     while(i){
    //         cout << " " ;
    //         i--;
    //     }
    //     while(m){
    //         cout << "*" ;
    //         m--;
    //     }
    //     cout << "\n";
    //     j += 2;
    // }

    //---------------------------------
    // int n, x;
    // int odd_index_sum = 0;
    // int even_index_sum = 0;
    // float odds = 0, evens = 0;
    // int i = 1;
    // cin >> n;
    // while (i <= n)
    // {
    //     cin >> x;
    //     if (i % 2)
    //     {
    //         odd_index_sum += x;
    //         odds++;
    //     }
    //     else{
    //         even_index_sum += x;
    //         evens++;
    //     }
    //     i++;
    // }

    // cout << odd_index_sum / odds << " " << even_index_sum / evens ;
    // int n ; cin >> n;

    // int i = 0;

    // while (i <= n){
    //     if (i % 8 == 0 || i % 12 == 0) cout << i << " " ;
    //     i++;
    // }

    // int n;
    // cin >> n;
    // int i = 0;
    // int count = 0;
    // while (count < n)
    // {
    //     if (i % 3 == 0 && i % 4 != 0)
    //     {
    //         count++;
    //         cout << i << " ";
    //     }
    //     i++;
    // }

    // int n ;
    // cin >> n;
    // string word;

    // while (n)
    // {
    //     cin >> word;
    //     if (word.length() == 2 && ((word[0] == 'N' || word[0] == 'n') && (word[1] == 'o' || word[1] == 'O')) || ((word[1] == 'N' || word[1] == 'n') && (word[0] == 'o' || word[0] == 'O')))
    //         cout << word << " ";
    //     n--;
    // }

    // int n ;
    // cin >> n;
    // int rev = 0;
    // while (n){

    //     int last = n % 10;
    //     rev = rev * 10 + last ;
    //     n = n / 10;
    // }
    // cout << rev <<" " << rev * 3;

    // int n, t;
    // cin >> t;
    // double inf = numeric_limits<double>::infinity();
    // int num;
    // while (t--)
    // {
    //     int low = inf;
    //     cin >> n;
    //     while (n)
    //     {
    //         cin >> num;
    //         if (num < low)
    //         {
    //             low = num;
    //         }
    //         n--;
    //     }
    //     cout << low << endl;
    // }

    int n  ;
    int m ;
    cin >> n >> m;
    int i = 1;
    int j ;
    while(i <= n){
        j = 1;
        while(j <= m){
            cout << i << " X " << j << " = " << j * i << endl;
            j++;
        }
        i++;
    }
    return 0;
}

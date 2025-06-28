#include <iostream>
using namespace std;

// Dr.Mostafa Saad Course Homework

int main()
{
    int n;
    cin >> n;

    if (n < 10000) cout << "This is a small number\n";

    else {

         int last = n % 1000;
         int f = last % 10;
         last = last / 10;
         int s = last % 10;
         last = last / 10;
         int t = last;
         int sum = f + s + t;

         if (sum % 2) cout << "This is a great number\n";

         else {

            if (f % 2 || s % 2 || t % 2) 
                cout << "This is a good number\n";
            else 
                cout << "This is a bad number\n";
                
         }


    }

    return 0;
}

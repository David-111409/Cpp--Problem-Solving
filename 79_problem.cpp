#include <iostream>
using namespace std;

int main() {
    int n ; // Can be any positive odd number
    cin >> n;

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            // Print '*' on the main or anti-diagonal
            if (j == i || j == n - i - 1)
                cout << "*";
            else
                cout << " ";
        }
        cout << endl;
    }

    return 0;
}

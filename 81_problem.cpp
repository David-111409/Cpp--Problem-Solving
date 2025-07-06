#include <iostream>
using namespace std;

int main() {
   int cnt = 0;
    for (int i = 1; i <= 200; i++){
        for (int j = 1; j <= 200; j++){
            for (int k = 1; k <= 200; k++){
                int m = i + j - k;
                if (m >= 1 && m <= 200) ++cnt;
            }
        }
    }
    cout << cnt;
    return 0;
}

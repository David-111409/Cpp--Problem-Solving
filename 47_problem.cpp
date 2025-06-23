#include <iostream>
using namespace std;

// Dr.Mostafa Saad Course Homework

int main() {

    int n1, n2, n3, n4, n5, n6, n7, n8;
  
    cin >> n1 >> n2 >> n3 >> n4 >> n5 >> n6 >> n7 >> n8;
  
    int odd_sum = n1 + n3 + n5 + n7 ;
  
    int even_sum = n2 + n4 + n6 + n8;

    cout << even_sum << " " << odd_sum << "\n";

    return 0;

}

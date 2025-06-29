#include <iostream>
using namespace std;

// Dr.Mostafa Saad Course Homework

int main()
{
    int num, s1, e1, s2, e2, s3, e3, count = 0;
  
    cin >> num >> s1 >> e1 >> s2 >> e2 >> s3 >> e3;
    
    if (num >= s1 && num <= e1) count ++;
    if (num >= s2 && num <= e2) count ++;
    if (num >= s3 && num <= e3) count ++;

    cout << count << endl;

    return 0;
}

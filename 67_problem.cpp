#include <iostream>
using namespace std;

// Dr.Mostafa Saad Course Homework

int main()
{
    int a, big , num;

    cin >> num;
    
    while(num-- > 0){
    cin >> a;
    if (big < a) 
        big = a;
}
   

    cout << big << endl;

    return 0;
}

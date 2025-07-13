// Online C++ compiler to run C++ program online
#include <iostream>
using namespace std;
int main() {
//   char chr = 'a';
//   int value = chr;
   
//   cout << value << "\n";
//   cout << int('a') << "\n";
//   cout << int('b') << "\n";
//   cout << int('A') << "\n";
//   cout << int('B') << "\n";
//   cout << char(int('a') + 32) << "\n";
//   cout << (int)'A' << "\n";
//   cout << (int)'a' << "\n";
   
//   char ch2 = 90;
//   cout << ch2 << "\n";
   
//   cout << ('a' < 'A') << "\n";
//   cout << ('B' < 'b') << "\n";
   
//   char c3 = ((int) 'c') - 32;
//   cout << c3 << "\n";
char c;
cin >> c;
if (c >= 'A' && c <= 'Z') {
    cout << c << " is an upper case letter\n";
    cout <<"and lower of it is " << char((int)(c) + 32) << "\n";
}
else if (c >= 'a' && c <= 'z'){
    cout << c << " is a lower case letter\nand upper of it is " << char((int)(c) - 32);
    
}
else if (c >= '0' && c <= '9'){
    cout << c <<  " is a digit\n";
}
else {
    cout << "It is not a letter or digit";
}
    return 0;
}

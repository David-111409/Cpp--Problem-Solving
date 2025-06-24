#include <iostream>
using namespace std;

// Dr.Mostafa Saad Course Homework

int main() {

  int num1 , num2 , num3 , num4;
	cin >> num1 >> num2 >> num3;
  // I want to swap the numbers num1, num2, num3 :: 115 20 301 >= 20 301 115
  num4 = num1;
  num1 = num2;
  num2 = num3;
	num3 = num4;

	cout<<num1<<" "<<num2<<  " " << num3 << endl;	// 231 7

	return 0;

}

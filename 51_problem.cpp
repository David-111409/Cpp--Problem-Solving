#include <iostream>
using namespace std;

// Dr.Mostafa Saad Course Homework

int main() {
  int a = 10, b = 20, c = 30, d = 40;

	cout << (a + b == c) << "\n"; // 1
	cout << (a + b + c >= 2 * d) << "\n"; // 10 + 20 + 30 >= 80 false

	cout << (a > 5 || d < 30) << "\n"; // 1
	cout << (a > 5 && d < 30) << "\n"; // 0
	cout << (a <= b && b <= c) << "\n"; // 1

	cout << (a > 5 && d < 30 || c - b == 10) << "\n"; // true
	cout << (a <= b && b <= c && c <= d) << "\n"; // true

	cout << (a > 5 && d < 30 || c > d || d % 2 == 0) << "\n"; // true
	cout << (a > 5 && d < 30 || c > d && d % 2 == 0) << "\n"; // false

	cout << ( a == 10 || b != 20  && c != 30 || d != 40) << "\n"; // true

	cout << ((a == 10 || b != 20) && c != 30 || d != 40) << "\n"; // false

  return 0;

}

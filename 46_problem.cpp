#include <iostream>
using namespace std;

// While homework

int main() {
  
    string name1 ;
    cout << "What is student 1 name: " ;
    cin >> name1;

    string id1 ;
    cout << "His id: ";
    cin >> id1;

    float math_grade1;
    cout << "His math grade: ";
    cin >> math_grade1;

    string name2 ;
    cout << "What is student 2 name: " ;
    cin >> name2;

    string id2;
    cout << "His id: ";
    cin >> id2;

    float math_grade2;
    cout << "His math grade: ";
    cin >> math_grade2;

    cout << "\nStudents grades in math\n";
    cout << name1 << " (with id " << id1 << ") " << "got grade: " << math_grade1 << endl;
    cout << name2 << " (with id " << id2 << ") " << "got grade: " << math_grade2 << endl;
    cout << "Average grade is " << (math_grade1 + math_grade2) / 2;

    return 0;

}

// // Online C++ compiler to run C++ program online
// #include <iostream>
// using namespace std;
// int main() {
// // char name1[7] = {'h', 'a', 'm', 'a', 'd', 'a'};
// // char name2[7] = "hamada";
// // cout << name2 << "\n";
// // string name3 = "hamada";
// // cout << name3 << "\n";
// // cout << name1 << "\n";
// // char name4[7];
// // name4[0] = 'h';
// // name4[1] = 'a';
// // name4[2] = 'm';
// // name4[3] = 'a';
// // name4[4] = 'd';
// // name4[5] = 'a';
// // // name4[6] = '\0';
// // cout << name4 << '\n';
// // char name[] = "hamada";
// // cout << name << '\n';
// // string name ;
// // getline(cin, name);
// // cout << name;
// // char name[7];
// // cin.getline(name, 7);
// // cout << name;
// // string names[3];
// // for (int i = 0; i<3; i++){
// //     cin >> names[i];
// // }
// // for (string name : names) cout << name << '\n';
// string words[1000] = {};
// int count = 0;
// while(cin >> words[i]){
//     count ++;
// }
// cout << count;
// return 0;
// }
#include <iostream>
#include <string>
using namespace std;

int main() {
    string word;
    int count = 0;
    
    while(cin >> word && word != "end"){
        count ++;
    }
    cout << count;
    return 0;
}

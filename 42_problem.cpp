using namespace std;
#include<iostream>
#include<algorithm>
 
bool is_lucky(int n){
    string n_str = to_string(n);
    for (char ch : n_str){
        if (ch != '4' && ch != '7') return false;
    }
    return true;
}

string print_lucky(int a, int b){
    string result = "";
    for (int i = a; i <= b; i++){
        if (is_lucky(i)) result += to_string(i) + " " ;
    }
    if (!result.empty() && result.back() == ' ')
        result.pop_back();  
    return result;
}  

int main(){
    int a, b;
    cin >> a >> b;
  
    string luckys = print_lucky(a, b);

    if (luckys.length() == 0) cout << -1;
    else cout << luckys;

    return 0;
}

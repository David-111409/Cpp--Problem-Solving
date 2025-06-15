using namespace std;
#include<iostream>
#include<string>
 
int palindrome(string word){
    int left = 0, right = word.length()-1;
    while(left < right){
        if (word[left] != word[right]) return 0;

        left ++;
        right --;
    }
    return 1;
}

int main(){
    string word ;
    cin >> word;

    if(palindrome(word)) cout << "YES";
    else cout << "NO";
    
    return 0;
}

/*
I. Palindrome
time limit per test1 second
memory limit per test256 megabytes
Given a string S. Determine whether S is Palindrome or not

Note: A string is said to be a palindrome if the reverse of the string is same as the string. For example, "abba" is palindrome, but "abbc" is not palindrome.

Input
Only one line contains a string S (1 ≤ |S| ≤ 1000) where |S| is the length of the string and it consists of lowercase letters only.

Output
Print "YES" if the string is palindrome, otherwise print "NO".

Examples
inputCopy
abba
outputCopy
YES
inputCopy
icpcassiut
outputCopy
NO
inputCopy
mam
outputCopy
YES
*/

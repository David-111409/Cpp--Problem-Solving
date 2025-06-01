#include <iostream>
#include<string>
using namespace std;

int  vowels_count(string words, int len = 0){

    string vowels = "aeiouAEIOU";

    if (len == words.length()) return 0;

    else if (vowels.find(words[len]) != string::npos){
        return 1 + vowels_count(words, len + 1);
    }

    else return vowels_count(words, len + 1);
}
    
int main(){
   string words;
   getline(cin, words);
   cout << vowels_count(words);   
}

/*
I. Count Vowels
time limit per test1 second
memory limit per test256 megabytes
Given a string S. Print number of vowels in the string.

Note:

Vowel letters: ['a', 'e', 'i', 'o', 'u'].
Vowel letters could be capital or small.
Solve this problem using recursion.
Input
Only one line containing a string S (1 ≤ |S| ≤ 200) where |S| is the 
length of the string and it consists only of capital ,small letters and spaces.

Output
Print number of vowels in string S.

Example
input
Data Structure Lab
output
6
 */

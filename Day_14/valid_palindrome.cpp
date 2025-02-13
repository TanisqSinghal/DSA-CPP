#include<iostream>
#include<cstring>
using namespace std;

bool validPalindrome(char word[], int n){
    int start = 0, end = n-1; 
    while(start < end){
        if(word[start++] != word[end--]) return false;
    }
    return true;
}

int main(){
    char word[] = "abccba";
    int val = validPalindrome(word, strlen(word));
    if(val == 1){
        cout << "Valid palindrome";
    } else {
        cout << "Not valid palindrome";
    }
    return 0;
}
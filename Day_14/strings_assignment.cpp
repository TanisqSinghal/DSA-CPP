#include<iostream>
#include<string>
using namespace std;

int countForvowels(string str1){
    int count = 0;
    for(int i=0; i<str1.length(); i++){
        if(str1[i] == 'a' || str1[i] == 'e' || str1[i] == 'i' || str1[i] == 'o' || str1[i] == 'u'){
            count++;
        }
    }
    return count ;
}
bool checkFortwostrings(string s1, string s2){
    int count = 0;
    for(int i=0; i<s1.length(); i++){
        if(s1[i] != s2[i]){
            count ++;
            int firstidx = i;
            if(count > 2) return false;
            else if(count == 2) swap(s1[firstidx],s1[i]);
        }
    }
    return true;
}
//leetcode 20
bool isValid(string s) {
    string stack = ""; // Using a string as a stack.

    for (char c : s) {
        // Push opening brackets to the stack.
        if (c == '(' || c == '{' || c == '[') {
            stack += c;
        } else {
            // If the stack is empty, return false.
            if (stack.empty()) {
                return false;
            }

            // Check if the current closing bracket matches the top of the stack.
            char top = stack.back(); // Get the last character.
            if ((c == ')' && top == '(') || 
                (c == '}' && top == '{') || 
                (c == ']' && top == '[')) {
                stack.pop_back(); // Pop the matching opening bracket.
            } else {
                return false; // Brackets do not match.
            }
        }
    }

    // If the stack is empty, all brackets matched correctly.
    return stack.empty();
}

int main(){
    // string str1;
    // cout << "Enter your word: " ;
    // getline(cin, str1);
    // cout << "no. of vowels are: "<< countForvowels(str1);
    string s1 = "abcd";
    string s2 = "dbca";
    string str1;
    cout << "Enter a parenthesis string: ";
    getline(cin, str1);
    cout << isValid(str1);
    // cout << checkFortwostrings(s1, s2);
    return 0;
}
#include<iostream>
#include<vector>
#include<string>
using namespace std;

void findPermutations(string str, string ans){
    int n = str.size();
    if(str.size() == 0){
        cout << ans << "\n";
        return;
    }
    for(int i=0; i<str.size(); i++){
        char ch = str[i];
        string nextsub = str.substr(0, i) + str.substr(i+1, n-i-1);
        findPermutations(nextsub, ans + ch);
    }
}

int main(){
    string str = "abc";
    string ans = "";
    findPermutations(str, ans);
    return 0;
}
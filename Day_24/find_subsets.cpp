#include<iostream>
#include<vector>
#include<string>
using namespace std;

void findSubset(string str, string ans){
    if(str.size() == 0) {
        cout << ans << "\n";
        return;
    }
    char ch = str[0];
    findSubset(str.substr(1, str.size()-1), ans + ch); // yes
    findSubset(str.substr(1, str.size()-1), ans);
    
}

int main(){
    string str = "abc";
    string subset = "";
    findSubset(str, subset);
    return 0;
}
#include<iostream>
#include<string>
using namespace std;
//leetcode 242
bool validAnagarms(string str1, string str2){
    if(str1.length() != str2.length()){
        return false;
    }
    int count[26] = {0};
    for(int i = 0; i<str1.length() ; i++){
        int idx = str1[i] - 'a';
        count[idx]++;
    }
    for(int i = 0; i<str2.length() ; i++){
        int idx = str2[i] - 'a';
        if(count[idx] == 0){
            return false;
        }
        count[idx]--;
    }
    return true;
}
int main(){
    string str1 = "anagrams";
    string str2 = "nagarama";
    cout << validAnagarms(str1,str2);
    return 0;
}
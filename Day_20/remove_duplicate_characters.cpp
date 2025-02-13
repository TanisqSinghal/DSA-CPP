#include<iostream>
#include<vector>
#include<string>
using namespace std;

void removeDup(string str, string ans, int i, int map[]){
    if(i == str.size()){
        cout << ans;
        return;
    }

    int mapIdx = str[i] - 'a';
    if(map[mapIdx]) {
        removeDup(str, ans, i+1, map);
    } else {
        map[mapIdx] = true;
        removeDup(str, ans + str[i], i+1, map);
    }
}

int main(){
    string str = "appnnacollege";
    string ans = "";
    int map[26] = {false};
    removeDup(str, ans, 0, map);
    return 0;
}
#include<iostream>
#include<climits>
using namespace std;
int main(){
    char ch[5] = {'c', 'o', 'd', 'e', '\0'};
    int n = sizeof(ch)/sizeof(char);
    cout << ch;
    return 0;
}
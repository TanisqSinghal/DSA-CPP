#include<iostream>
#include<cstring>
using namespace std;

int fastExponentition(int x, int n){
    int ans = 1;
    while(n > 0){
        int lastdigit = n & 1;
        if(lastdigit != 0){
            ans = ans * x;
        } 
        x = x * x;
        
        n = n >> 1;
    }
    // cout << x;
    return ans;
}

int main(){
    cout << fastExponentition(2,3);
    return 0;
}
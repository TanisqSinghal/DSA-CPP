#include<iostream>
#include<cstring>
using namespace std;

int creatingBitmask(int num, int i){
    int mask = 1 << i;
    if(!(num & mask)){
        return 0;
    } else {
        return 1;
    }
}

int main(){
    cout << creatingBitmask(7, 1);
    return 0;
}
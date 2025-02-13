#include<iostream>
#include<cstring>
using namespace std;

int clearIbits(int num, int i){
    num = num & (~0 << i);
    cout << num;
}

int main(){
    clearIbits(15, 2);
    return 0;
}
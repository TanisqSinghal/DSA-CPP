#include<iostream>
#include<cstring>
using namespace std;

void countSetbits(int num) {
    int sum = 0,lastdigit;
    while(num > 0){
    lastdigit = num & 1;
    sum = sum + lastdigit;
    num = num >> 1;
    }
    cout << sum;
}

int main(){
    countSetbits(10);
    return 0;
}
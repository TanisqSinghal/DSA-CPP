#include<iostream>
#include<cstring>
using namespace std;

int fibbbonacci(int n) {
    if(n == 0 || n == 1) {
        return n;
    }
    return fibbbonacci(n-1) + fibbbonacci(n-2);
}

int main(){
    cout << fibbbonacci(5);
    return 0;
}
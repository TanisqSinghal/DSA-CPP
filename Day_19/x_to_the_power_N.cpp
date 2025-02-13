#include<iostream>
#include<vector>
#include<string>
using namespace std;

// x^n
int power(int x, int n){
    if(n == 0) return 1; //creates a problem when n is negative //alwasys check for the base case

    return x * power(x, n-1); //segmenation fault when n is negative
}

int main(){
    cout << power(2, 5); // 2^5 = 32
    return 0;
}
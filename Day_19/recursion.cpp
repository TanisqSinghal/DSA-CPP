#include<iostream>
#include<cstring>
using namespace std;
// Factorial of a number using recursion
int factorial(int n){
    if(n == 0){
        return 1;   // base case
    }
    return n * factorial(n - 1); // recursion
};

int main(){
    cout << factorial(10) << endl; // 120
    return 0;
}
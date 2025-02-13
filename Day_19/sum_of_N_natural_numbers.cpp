#include<iostream>
#include<cstring>
using namespace std;

int sumofNnumbers(int n) {
    if(n == 1) {
        return 1;  // Base Case //reason: sum of 0 numbers is 0
    }
    //when n becomes 
    return n + sumofNnumbers(n-1); // Recursive Call
}

int main(){
    cout << sumofNnumbers(66); // 15
    return 0;
}
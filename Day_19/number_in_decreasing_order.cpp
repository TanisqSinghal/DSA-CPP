#include<iostream>
#include<cstring>
using namespace std;

void DecreasingOrder(int n) { // Function to print numbers in decreasing order
    if(n == 0) {
        return;  // Base Case
    }

    cout << n << " ";
    DecreasingOrder(n-1); // Recursive Call
}

int main(){
    DecreasingOrder(5); // 5 4 3 2 1
    return 0;
}
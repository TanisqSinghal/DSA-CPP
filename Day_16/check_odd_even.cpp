#include<iostream>
#include<cstring>
using namespace std;
int main(){
    int n = 6;
    if(!(n & 1)) {
        cout << "even"; // Bitmask - access specific bit of data
    }
    else {
        cout << "odd";
    }
    return 0;
}
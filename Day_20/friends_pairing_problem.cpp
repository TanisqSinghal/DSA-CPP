#include<iostream>
#include<vector>
#include<string>
using namespace std;

int friendsPair(int n) {
    if(n == 1  || n == 2){
        return n;
    }
    int single = friendsPair(n-1); //single
    int pair = (n-1) * friendsPair(n-2);   //pair
    return  single + pair;
}

int main(){
    cout << friendsPair(4);
    return 0;
}
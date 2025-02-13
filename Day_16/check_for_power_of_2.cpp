#include<iostream>
#include<cstring>
using namespace std;

bool checkforTwo(int num){
    if(!(num & num-1)){
        return true;
    } else {
        return false;
    }
}

int main(){
    cout << checkforTwo(16) << endl;
    cout << checkforTwo(12);
    return 0;
}
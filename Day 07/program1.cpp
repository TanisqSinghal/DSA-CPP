#include<iostream>
using namespace std;

void recursivefunction(){
    cout << "HELLO :) \n";
    recursivefunction();
}
int main(){
    recursivefunction();
    return 0;
}
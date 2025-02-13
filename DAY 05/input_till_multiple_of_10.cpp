#include<iostream>
using namespace std;
int main(){
    int input;
    while(input >0){
        cout << "Enter value : " ;
        cin >> input;
        if(input%10 == 0){
            cout << "You ran out of loop";
            break;
        } 
    }
    return 0;
}
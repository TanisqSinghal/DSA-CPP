#include<iostream>
using namespace std;
int main(){
    int income;
    cout << "Enter your income: ";
    cin >> income ;
    if(income < 500000){
        cout << "tax = 0%";
    }
    else if(income <= 1000000){
        cout << "tax = 20%";
    }
    else {
        cout << "tax = 30%";
    }
    return 0; 
}
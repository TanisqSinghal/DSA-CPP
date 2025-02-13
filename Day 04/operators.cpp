#include<iostream>
using namespace std;
int main(){
    int age;
    cout << "Enter your age: ";
    cin >> age ;
    if( age >= 18){
        cout << "This person is eligible for vote" << endl;
    }
    if( age >= 45){
        cout << "This person is eligible for contest elections also";
    }
    return 0;
}
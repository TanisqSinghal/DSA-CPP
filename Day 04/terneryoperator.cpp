#include<iostream>
using namespace std;
int main(){
    int a;
    cout << "Enter a = ";
    cin >> a;
    bool isadult = (a >= 18) ? true : false;
    cout << (isadult) ;
    return 0; 
}
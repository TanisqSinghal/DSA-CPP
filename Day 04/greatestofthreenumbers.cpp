#include<iostream>
using namespace std;
int main(){
    int a,b,c;
    cout << "Enter a : ";
    cin >> a;
    cout << "Enter b : ";
    cin >> b;
    cout << "Enter c : ";
    cin >> c;
    if(a >= b && a >= c){
        cout << "a is largest = " << a << endl;
    }
    else if(b >= c){
        cout << "b is largest = " << b << endl;
    }
    else{
        cout << "c is largest = " << c << endl;
    }
    return 0;
}
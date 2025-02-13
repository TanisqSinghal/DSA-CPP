#include<iostream>
using namespace std;
int main(){
    int n;
    bool isprime = true;
    cout << "Enter a number to check : ";
    cin >> n;
    for(int i = 2 ; i <= n-1 ; i++ ){
    if(n%i == 0){
        isprime = false;
        break;
        }
    }
    if(isprime) cout << "prime";
    else cout << "not prime";

    return 0;
}
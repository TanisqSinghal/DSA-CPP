#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    bool isprime = true;
    cout << "Enter a number to check : ";
    cin >> n;
    for(int i = 2 ; i <= sqrt(n) ; i++ ){
    if(n%i == 0){
        isprime = false;
        break;
        }
    }
    if(isprime) cout << "prime";
    else cout << "not prime";
    return 0;
}
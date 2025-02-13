#include<iostream>
using namespace std;
int main(){
    int n,count=0;
    cout << "Enter a number to check : ";
    cin >> n;
    if(n == 1 || n==0){
        cout << "0 and 1 are invalid";
    }
    else {
        for(int i = 2 ; i <= n ; i++ ){
            if(n%i == 0){
                count+=1;
            }
        }
        if(count >= 2) cout << "not prime";
        else cout << "prime";
    }
    return 0;
}
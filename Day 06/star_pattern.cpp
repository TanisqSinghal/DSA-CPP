#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    n=n+64;
    for ( int i = 65 ; i <= n ; i++){
        for ( int j = 65 ; j <= i; j++){
            cout << char(i) << " ";
        }
        cout << endl;
    }
    return 0;
}
#include<iostream>
using namespace std;
int main(){ 
    int n,store=0,sum=0;
    cout <<"Enter a number: "; // 1234
    cin >> n;
    while(n > 0){
        store = n%10;
        if(n%2 != 0){
            sum = sum + store;
        }
        n = n/10;
    }
    cout << "Your sum is = " << sum << endl;
    return 0;
}
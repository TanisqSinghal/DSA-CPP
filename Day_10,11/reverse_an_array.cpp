#include<iostream>
using namespace std;
int main(){
    int arr[] = {2,4,6,7,8};
    int n = sizeof(arr)/sizeof(int);
    for(int i=n-1 ; i>=0 ; i--){
        cout << arr[i] << " " ;
    }
    return 0;
}
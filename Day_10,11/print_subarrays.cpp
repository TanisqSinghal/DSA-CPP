#include<iostream>
using namespace std;

void printsubArr(int *arr , int n){
    for(int start=0 ; start<n ; start++){
        for(int end=start ; end<n ; end++){
            // cout << "(" << arr[start] << "," << arr[end] << ") ";
            for(int i=start; i<=end; i++){
                cout << arr[i];
            }
            cout << ", ";
        }
        cout << endl;
    }
}
int main(){
    int arr[5] = {1,2,3,4,5};
    int n = 5;
    printsubArr(arr, n);
    
    return 0;
}
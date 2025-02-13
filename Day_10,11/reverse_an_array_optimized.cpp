#include<iostream>
using namespace std;

void printArr(int arr[] , int n){
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
}

void revArr(int arr[] , int n){
    int st = 0 , end = n-1, temp=0;
    while(st < end){
        temp = arr[st];
        arr[st] = arr[end];
        arr[end] = temp;
        st++;
        end--;
    }
    printArr(arr, n);
}
int main(){
    int arr[] = {12,13,11,23,5};
    int n = sizeof(arr)/sizeof(n);
    revArr(arr, n);
    return 0;
}
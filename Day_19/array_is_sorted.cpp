#include<iostream>
#include<cstring>
using namespace std;

bool sortedArray(int arr[], int n, int i) {
    if(i == n-1) return true;

    if(arr[i] > arr[i+1]) return false;

    return sortedArray(arr, n, i+1);
}

int main(){
    int arr[] = {1,2,3,4,5};
    int n = sizeof(arr)/sizeof(int);
    int i = 0;
    cout << sortedArray(arr, n, i);
    return 0;
}
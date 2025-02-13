#include<iostream>
#include<climits>
using namespace std;
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }
}
void selectionSort(int arr[], int n){
    for(int i=0; i<n-1; i++){
        int minIdx = i;
        for(int j=i; j<n; j++){
            if(arr[minIdx] > arr[j]) minIdx = j;
        }
        swap(arr[minIdx],arr[i]);
    }
    print(arr, n);
}
int main(){
    int arr[] = {5, 4, 1, 3, 2};
    int n = sizeof(arr)/sizeof(int);
    selectionSort(arr, n);
    return 0;
}
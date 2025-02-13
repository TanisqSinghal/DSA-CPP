#include<iostream>
#include<climits>
using namespace std;
void print(int arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

}
void insertionSort(int arr[], int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > temp){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev+1] = temp;
    }
    print(arr, n);
}

int main(){
    int arr[] = {-1,2,-10,0,9,5};
    int n = sizeof(arr)/sizeof(int);
    insertionSort(arr, n);
    return 0;
}
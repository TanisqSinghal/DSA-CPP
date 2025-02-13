#include<iostream>
using namespace std;
int BinarySearch(int arr[], int n, int key){
    int start = 0, end = n-1;
    while(start <= end){
        int mid = (start+end)/2;
        if(arr[mid] == key){
            return mid;
        }
        else if(key > arr[mid]){
            start = mid+1;
        }
        else {
            end = mid-1;
        }
    }
    return -1;
}

int main(){
    //Pre-requisite - Array should be sorted 
    int arr[] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(arr)/sizeof(int);
    int value = BinarySearch(arr, n, 9);
    cout << "Element found at index: " << value;
    return 0;
}
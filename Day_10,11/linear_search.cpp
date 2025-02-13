#include<iostream>
using namespace std;

int Linearsearch(int arr[], int n, int key){
    for(int i=0; i<n ; i++){
        if(key == arr[i]){
            return i;
        }
    }
    return -1;
}

int main(){
    int arr[] = {2, 4, 6, 8, 10, 12, 14, 16};
    int n = sizeof(arr)/sizeof(int);
    int key = 20;
    int val = Linearsearch(arr, n, key);
    cout << "Element found at index: " << val;
    return 0;
}
#include<iostream>
#include<climits>
using namespace std;

void printsubArr(int *arr , int n){
    int max = INT_MIN;
    for(int start=0 ; start<n ; start++){
        for(int end=start ; end<n ; end++){
            int currentsum = 0;
            // cout << "(" << arr[start] << "," << arr[end] << ") ";
            for(int i=start; i<=end; i++){
                cout << arr[i];
                currentsum = currentsum + arr[i];
            }
            if(currentsum>= max) max = currentsum;
            cout << ", ";
        }
        cout << endl;
    }
    cout << "Maximum subarray sum is: " << max;
}
int main(){
    int arr[5] = {1,2,-3,-4,5};
    int n = sizeof(arr)/sizeof(int);
    printsubArr(arr, n);
    
    return 0;
}
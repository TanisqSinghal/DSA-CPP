#include<iostream>
#include<climits>
using namespace std;

void printsubArr(int *arr , int n){
    int maxSum = INT_MIN;
    for(int start=0 ; start<n ; start++){
        int currentsum = 0;
        for(int end=start ; end<n ; end++){
            currentsum = currentsum + arr[end];
            maxSum = max(maxSum,currentsum);
        }
    }
    cout << "Maximum subarray sum is: " << maxSum;
}
int main(){
    int arr[5] = {1,2,-3,-4,5};
    int n = sizeof(arr)/sizeof(int);
    printsubArr(arr, n);
    
    return 0;
}
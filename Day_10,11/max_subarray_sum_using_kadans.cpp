#include<iostream>
#include<climits>
using namespace std;

void printsubArr(int *arr , int n){
    int maxSum = INT_MIN;
    int currentsum = 0;
    for(int start=0 ; start<n ; start++){
        currentsum = currentsum + arr[start];
        if(currentsum < 0) currentsum = 0;//using kadan's algorithm {if my current sum is less than 0 then obv. it wil decrease the size of my sum so make it zero}
        maxSum = max(maxSum,currentsum);
    }
    cout << "Maximum subarray sum is: " << maxSum;
}
int main(){
    int arr[5] = {1,2,-3,-4,5};
    int n = sizeof(arr)/sizeof(int);
    printsubArr(arr, n);
    
    return 0;
}
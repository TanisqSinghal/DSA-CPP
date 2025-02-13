#include<iostream>
#include<climits>
using namespace std;
//Leetcode 42 
int trappingrainwater(int height[], int n){
    int leftMax[20000],rightMax[20000];
    leftMax[0] = height[0],  rightMax[n-1]= height[n-1];
    // cout << leftMax[0] << ", ";
    for(int i=1; i<n; i++){
        leftMax[i] = max(height[i-1] , leftMax[i-1]);
        // cout << leftMax[i] << ", ";
    }
    // cout << endl;
    // cout << rightMax[n-1] << ", ";
    for(int i=n-2; i>=0; i--){
        rightMax[i] = max(height[i+1] , rightMax[i+1]);
        cout << rightMax[i] << ", ";
    }
    // cout << endl;
    int watertrapped = 0;
    for(int i=0; i<n; i++){
        int curr = min(leftMax[i] , rightMax[i]) - height[i];
        if(curr > 0){
            watertrapped += curr;
        }
    }
    return watertrapped;
}
int main(){
    int height[] = {4, 2, 0, 6, 3, 2, 5};
    int n = sizeof(height)/sizeof(int);
    cout << trappingrainwater(height, n);
    return 0;
}
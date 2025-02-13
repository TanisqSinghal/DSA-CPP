#include<iostream>
#include<climits>
using namespace std;
//Leetcode 121
int buyandsellStock(int arr[], int n){
    int bestBuy[100000];
    bestBuy[0] = INT_MAX;
    for(int i=1; i<n; i++){
        bestBuy[i] = min(bestBuy[i-1], arr[i-1]);
    }
    int Maxprofit = 0;
    for(int i=0; i<n; i++){
        int currentprofit = arr[i] - bestBuy[i];
        Maxprofit = max(Maxprofit,currentprofit); 
    }
    cout << "Max profit is: " << Maxprofit;
    return Maxprofit;
}
int main(){
    int arr[] = {7,1,5,3,6,4};
    int n = sizeof(arr)/sizeof(int);
    buyandsellStock(arr , n);
    return 0;
}
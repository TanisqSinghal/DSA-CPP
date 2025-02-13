#include<iostream>
#include<climits>
using namespace std;
bool containduplicate(int arr[] , int n){
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // Start j from i+1 to avoid self-comparison
            if (arr[i] == arr[j]) {
                return true; // Duplicate found
            }
        }
    }
    return false; // No duplicates found
}
int rotedsortedArray(int arr1[], int n, int target){
    int start = 0, end = n-1;
    while(start <= end){
        int mid = start+(end-start)/2;
        if(arr1[mid] == target){
                return mid;
        }
        if(arr1[start] <= arr1[mid]){
            if(arr1[start] <= target && target <= arr1[mid]){
                end = mid-1;
            }
            else {
                start = mid+1;
            }
        }
        else {
            if(arr1[mid] <= target && target <= arr1[end]){
                start = mid+1;
            }
            else {
                end = mid-1;
            }
        }
    }
    return -1;
}

int MaxproductSubarrays(int arr2[], int n){
    int leftproduct = 1, rightproduct = 1, ans = arr2[0];
    for(int i=0; i<n; i++){
        leftproduct = leftproduct == 0? 1: leftproduct;    // if the value of any product is equal to 0 then make it 1
        rightproduct = rightproduct == 0? 1: rightproduct; //using kadan's algorithm

        leftproduct = leftproduct * arr2[i];
        rightproduct = rightproduct * arr2[n-i-1]; // Multiply the subarrays one by one from starting and ending 

        ans = max(ans, max(leftproduct, rightproduct)); // Calculate the maximum of ans , leftproduct and right product and store it in a ans
    }
    return ans;
}
int main(){
    int arr[] = {1, 2, 3, 4};
    int arr1[] = {4, 5, 6, 7, 0, 1, 2}; 
    int arr2[] = {2, 3, -2, -5, 6, -1, 4};
    int n = sizeof(arr2)/sizeof(int);
    cout << MaxproductSubarrays(arr2, n);
    return 0;
}
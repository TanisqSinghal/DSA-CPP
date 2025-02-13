#include<iostream>
#include<vector>
#include<string>
using namespace std;

int lastOccurence(vector<int> arr, int i, int target){
    if(i < 0) return -1;

    if(arr[i] == target) { 
       return i;
    }

    return lastOccurence(arr, i-1, target); //don't write code if i dont ask you to write
}

int main(){
    vector<int> arr = {1,2,3,3,3,4};
    cout << lastOccurence(arr, arr.size() - 1, 2);
    return 0;
}
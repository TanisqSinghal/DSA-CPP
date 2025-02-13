#include<iostream>
using namespace std;
int main(){
    int arr[5] = {1, 2, 3, 4, 5};
    int n = sizeof(arr)/sizeof(int);
    int max = arr[0];
    for(int i=0; i<= n-1; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout << "Maximum element in array is: " << max;
    return 0;
}
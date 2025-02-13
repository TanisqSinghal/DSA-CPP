#include<iostream>
#include<climits>
using namespace std;
void print(char arr[], int n){
    for(int i=0; i<n; i++){
        cout << arr[i] << " ";
    }

}
void insertionSort(char arr[], int n){
    for(int i=1; i<n; i++){
        int temp = arr[i];
        int prev = i-1;
        while(prev >= 0 && arr[prev] > temp){
            swap(arr[prev], arr[prev+1]);
            prev--;
        }
        arr[prev+1] = temp;
    }
    print(arr, n);
}

int main(){
    char arr[] = {'f', 'b', 'a', 'e', 'c', 'd' };
    int n = sizeof(arr)/sizeof(char);
    insertionSort(arr, n);
    return 0;
}
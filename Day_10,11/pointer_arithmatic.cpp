#include<iostream>
using namespace std;
int main(){
    int arr[20] = {1,2,3,23,5,6,7,8,9};
    int *ptr1 = arr;
    int *ptr2 = ptr1 + 3;
    cout << ptr2 - ptr1;
    return 0;
}
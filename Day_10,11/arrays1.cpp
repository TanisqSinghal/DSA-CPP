#include<iostream>
using namespace std;
int main(){
    int marks[50] = {1,2,3,4,5,6,7,8,9};
    int n = sizeof(marks) / sizeof(int);
    cout << n;
    return 0;
}
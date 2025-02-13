#include<iostream>
using namespace std;
int main(){
    //Predict the Output:
    int x = 10 , y = 20;
    int *ptr1 = &x, *ptr2 = &y;
    ptr2 = ptr1;
    cout << *ptr2 << endl;
    return 0;
}
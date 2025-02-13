#include<iostream>
using namespace std;
int main(){
    double english , maths , science,sum;
    //input of english
    cout<< "Enter marks in engish : ";
    cin>>english;
    //input of maths
    cout<< "Enter marks in maths : ";
    cin>>maths;
    //input of science
    cout<< "Enter marks in Science : ";
    cin>>science;
    //printing average marks
    cout<< "Your avg marks are : " << (english + maths + science)/3;
    return 0;
}
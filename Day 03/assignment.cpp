#include<iostream>
using namespace std;
int main(){
    // // question 1 :
    int x = 2, y = 5;
    int exp1 = (x * y / x); // 5
    int exp2 = (x * (y / x)); // 4
    cout << exp1 << ",";
    cout << exp2 << "\n";


    //question 2 :
    int x = 10, y = 5;
    int exp1 = (y * (x / y + x / y)); //20
    int exp2 = (y * x / y + y * x / y); //20
    cout << exp1 << " ";
    cout << exp2 << "\n";   


    //question 3 :
    int x = 200, y = 50, z = 100;
    if(x > y && y > z){
    cout << "Hello \n";
    }
    if(z > y && z < x){ 
        cout << "C++ \n"; // output will be : C++
    }
    if((y+200) < x && (y+150) < z){ 
    cout << "Hello C++ \n";
    }

    
    return 0;
}
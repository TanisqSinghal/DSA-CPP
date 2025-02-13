#include<iostream>
using namespace std;
int factforn = 1 , factforr = 1 , factfor_n_and_r = 1,n,r;
int binomial(int n , int r , int ){
    for(int i = 1 ; i <= n ; i++){
        factforn = factforn * i; 
    }
    return factforn;
}
int main(){

    return 0;
}
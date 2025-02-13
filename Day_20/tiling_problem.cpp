#include<iostream>
#include<vector>
#include<string>
using namespace std;

//tiling problem
int tilingProblem(int n){
    if(n == 0 || n == 1) {
        return 1; //base case
    }
    int ans1 = tilingProblem(n-1);      //recursive call for vertical tiling
    int ans2 = tilingProblem(n-2);      //recursive call for horizontal tiling

    return ans1 + ans2; //returning the sum of both the cases
}

int main(){
    cout << tilingProblem(3);
    return 0;
}
#include<iostream>
#include<climits>
#include<cstring>
//leetcode 1572
using namespace std;
int diagonalsum(int mat[][4], int n){
    int sum = 0;
    for(int i=0; i<n; i++){
        sum += mat[i][i]; // add primary diagonal [have same number of rows and column]
        if(i != n-i-1) sum += mat[i][n-i-1]; // add secondary diagonal [satisfy i = n-i-1]
    }
    return sum;
}
int main(){
    int mat[4][4] = {{10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 40}};
    cout << diagonalsum(mat, 4);
    return 0;
}
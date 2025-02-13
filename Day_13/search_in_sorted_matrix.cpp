#include<iostream>
#include<climits>
#include<cstring>
using namespace std;
bool search(int mat[][4], int n, int m,int key){
    int i = 0, j = m-1;
    while(i < n && j >= 0){
        int cell = mat[i][j];
        if(cell == key) return true;
        else if(cell < key) i++;
        else j--;
    }
    return false;
}
int main(){
    int mat[4][4] = {{10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 40}};
    cout << search(mat, 4, 4, 1);
    return 0;
}
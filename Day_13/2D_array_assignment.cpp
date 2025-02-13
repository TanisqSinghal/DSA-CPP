#include<iostream>
using namespace std;
//Question 1 : Print the number of all 7’s that are in the 2d array.
// Example :
// Input - int arr[ ][ ] = { {4,7,8}, {8,8,7} }; n = 2, m = 3
// Output - 2
int occuranceOf7(int arr[][3], int n, int m){
    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(arr[i][j] == 7) sum += 1;
        }
    }
    return sum;
}
// Print out the sum of the numbers in the second row of the “nums” array.
// Example :
// Input - int nums[ ][ ] = { {1,4,9}, {11,4,3}, {2,2,3} };
// Output - 18
int sumof2row(int mat[][3], int n, int m){
    int sum = 0;
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            if(i == 1) sum += mat[i][j];
        }
        if(i == 1) return sum;
    }
    return sum;
}
// Write a program to Find Transpose of a Matrix.
void transpose(int arr[][3], int n, int m){
    for(int i=0; i<m; i++){
        for(int j=0; j<n; j++){
            cout << arr[j][i] << " ";
        }
        cout << endl;
    }

}
//leetcode 48
void rotateTo90(int mat[][4], int m, int n){
    for(int i=0; i<m; i++){
        int row = n-1;
        for(int j=0; j<n; j++){
            cout << mat[row][i] << " ";
            row--;
        }
        cout << endl;
    }
}
//leetcode 48 2nd approach optimised
void rotateTo90s(int matrix[][4], int n, int m){
    for(int i=0; i<(n+1)/2; i++){
        for(int j=0; j<n/2; j++){
           // Start 4 way swaps
        // temp = bottom left
        int temp = matrix[n - 1 - j][i];

        // bottom left = bottom right
        matrix[n - 1 - j][i] = matrix[n - 1 - i][n - j - 1];

        // bottom right = top right
        matrix[n - 1 - i][n - j - 1] = matrix[j][n - 1 -i];

        // top right = top left
        matrix[j][n - 1 - i] = matrix[i][j];

        // top left = temp
        matrix[i][j] = temp;
        }
    }
    for(int i=0; i<n; i++){
        for(int j=0; j<m; j++){
            cout << matrix  [i][j] << " ";
        }
        cout << endl;
    }
}
int main(){
    int arr[2][3] = { {4, 7, 8}, {8, 8, 7}};
    int mat[4][4] = { {5, 1, 9, 11}, {2, 4, 8, 10}, {13, 3, 6, 7}, { 15, 14, 12, 16}};
    rotateTo90s(mat, 4, 4);
    return 0;
}
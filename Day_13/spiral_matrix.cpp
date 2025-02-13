#include <iostream>
#include <climits>
using namespace std;
//Leetcode 54
void spiralmatrix(int mat[][4], int n, int m)
{
    int srow = 0, scol = 0, erow = n - 1, ecol = m - 1;
    while (srow <= erow && scol <= ecol)//run till starting row is less then ending row and same of column
    {
        //top row will print
        for (int i = scol; i <= ecol; i++)
        {
            cout << mat[srow][i] << " ";
        }
        //right column will print
        for (int i = srow + 1; i <= erow; i++)
        {
            cout << mat[i][ecol] << " ";
        }
        //bottom row will print
        for (int i = ecol - 1; i >= scol; i--)
        {
            if(srow == erow) break; // it will check the condition for odd number of rows to not repeat
            cout << mat[erow][i] << " ";
        }
        //left column will print
        for (int i = erow - 1; i >= srow + 1; i--)
        {
            if(scol == ecol) break; // it will check the condition for odd number of columns to not repeat
            cout << mat[i][scol] << " ";
        }
        srow++; scol++;
        erow--; ecol--;
    }
}
int main()
{
    int mat[][4] = {{10, 20, 30, 40},
                    {15, 25, 35, 45},
                    {27, 29, 37, 48},
                    {32, 33, 39, 40}};
    spiralmatrix(mat, 4, 4);
    return 0;
}
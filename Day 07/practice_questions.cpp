#include <iostream>
using namespace std;

// int prod(int a , int b){
//     return a * b;
// }
int isoddoreven(int n)
{
    if (n % 2 == 0)
    {
        cout << "Even with value : ";
        return n;
    }
    else
    {
        cout << "Odd with value : ";
        return n;
    }
}
int main()
{
    // int product = prod(2,3);
    // cout << "Product is : " << product << endl;
    cout << isoddoreven(4);
    return 0;
}
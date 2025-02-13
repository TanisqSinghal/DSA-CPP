#include <iostream>
using namespace std;
int reversednumber = 0;
bool ispalindrome(int n)
{
    int originalnumber = n;
    while (n > 0)
    {
        int a = n % 10;
        reversednumber = reversednumber * 10 + a;
        n = n / 10;
    }
    return reversednumber == originalnumber;
}
int main()
{
    cout << ispalindrome(131);
    return 0;
}
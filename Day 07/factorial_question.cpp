#include <iostream>
using namespace std;
int fact = 1;

int factorial(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
    {
        for (int i = 1; i <= n; i++)
        {
            fact = fact * i;
        }
        return fact;
    }
}
int main()
{
    cout << factorial(1);
    return 0;
}
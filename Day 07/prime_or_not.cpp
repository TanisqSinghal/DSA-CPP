#include <iostream>
#include<cmath>
using namespace std;
bool primeornot(int n)
{
    for (int i = 2; i <= n - 1; i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return false;
}
bool isprime(int n){
    for(int i = 2 ; i <= sqrt(n) ; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;
}

int main()
{
    cout << isprime(10);
    return 0;
}
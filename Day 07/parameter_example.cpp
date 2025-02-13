#include <iostream>
using namespace std;
int sum(int a, int b)
{ // parameters
    return a + b;
}
int main()
{
    int s = sum(2, 3); // arguments
    cout << "Sum is : " << s << endl;
    return 0;
}
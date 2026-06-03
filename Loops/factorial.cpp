#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    cout<<"enter value of n: ";
    cin>>n;

    int original = n;

    int fac = 1;

    while (n > 0)
    {
        fac = fac * n;
        n--;
    }
    cout<<"factorial of "<<original<<" is : "<<fac<<endl;
    
    return 0;
}

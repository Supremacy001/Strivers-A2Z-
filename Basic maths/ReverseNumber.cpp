#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"enter a number: ";
    int n, store, rev = 0;
    cin>>n;

    while (n > 0)
    {
        store = n % 10;
        rev = rev*10 + store;
        n = n/10;
    }

    cout<<rev;
    
    return 0;
}

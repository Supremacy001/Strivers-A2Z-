#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"enter a number: ";
    int n, dup, store, rev = 0;
    cin>>n;
    dup = n;

    while (n > 0)
    {
        store = n % 10;
        rev = rev*10 + store;
        n = n/10;
    }

    if (dup == rev)
    {
        cout<<"true";
    }
    else {
        cout<<"false";
    }
    
    
    return 0;
}

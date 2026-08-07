#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "enter a number: ";
    int x, last, rev = 0;
    cin>>x;
    int dup = x;

    if (x % 2 == 0)
    {
        last = x % 10;
        rev = rev * 10 + last;
        x = x / 10;
    }
    else {

        while (x )
        {
            /* code */
        }
        
    }
    
    
    
    
    
    return 0;
}

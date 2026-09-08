#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"enter a number: ";
    
    int x, last, sum = 0;

    cin>>x;

    int dup = x;

    while (x != 0)
    {
        last = x % 10;
        
        sum = sum + last*last*last;

        x = x / 10;
    }

    if (dup == sum)
    {
        cout<<"Armstrong number";
        return 0;
    }
    
    cout<<"NOT Armstrong number";
    
    return 0;
}

#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout<<"enter two numbers: ";

    int x, y, i = 1, max = 0;

    cin>>x>>y;

    while ( i <= x && i <= y)
    {
        if ( x % i == 0 && y % i == 0)
        {
            cout<<"common factors: "<< i <<endl;
            max = i;

        }
        i++;
        
    }
    
    cout<<"HCF = "<<max;
    
    
    return 0;
}

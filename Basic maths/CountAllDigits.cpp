#include <iostream>
using namespace std;
 
int main(int argc, char const *argv[])
{
    int n, count = 0;
    
    cout<<"enter a number: ";
    
    cin>>n;

    if (n == 0)
    {
        cout << "1";
        return 0;
    }

    if (n < 0)
    {
        n = -n;
    }

    while (n > 0)
    {
        n /= 10;
        count++;
    }

    cout << count;
    return 0;
}

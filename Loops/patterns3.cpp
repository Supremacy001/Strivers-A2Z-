#include <iostream>
using namespace std;

void halfdiamond(int n) {

    for (int i = 0; i <= 2*n - 1; i++)
    {
        int stars;

        if (i <= n)
        {
            stars = i;
        }

        else {
            stars = 2*n - i;
        }

        for (int j = 0; j < stars; j++)
        {
            cout<<" *";
        }
        cout<<endl;
         
    }
}

int main(int argc, char const *argv[])
{
    int n;

    cout<<"enter no. of rows: ";
    cin>>n;

    halfdiamond(n);
    return 0;
}
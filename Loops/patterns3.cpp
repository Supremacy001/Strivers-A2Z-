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

void assymetricaldiamond (int n) {

    for (int i = 0; i < n; i++)
    {
        for (int j = n - 1; j > i; j--)
        {
            cout<<" #";
        } 
        for (int k = 0; k < 2*i + 1; k++)
        {
            cout<<" *";
        }
        cout<<endl;
       
    }
   
    
    
}

void binaryTriangle (int n) {

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            if ((i + j) % 2 == 0)
            {
                cout<<"1";
            }
            else {
                cout<<"0";
            }
        }
        cout<<endl;
    }
    
}

int main(int argc, char const *argv[])
{
    int n;

    cout<<"enter no. of rows: ";
    cin>>n;

    cout<<"type 1 for half diamond"<<endl;
    cout<<"type 2 for assymetrical diamond"<<endl;
    cout<<"type 3 for binary trianle"<<endl;
    cout<<"type 4 for "<<endl;
    int input;
    cin>>input;

    switch (input)
    {
    case 1:
        halfdiamond(n);
        break;
    
    case 2:
        assymetricaldiamond(n);
        break;

    case 3:
        binaryTriangle(n);

    default:
        break;
    }
    return 0;
}
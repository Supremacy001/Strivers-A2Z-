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

    // My Original Solution

    /*for (int i = 0; i < n; i++)
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
    */

    //Strivers Sheet Solution\

    for (int i = 0; i < n; i++)
    {
        int start;

        if (i % 2 == 0)
        {
            start = 1;
        }
        else {
            start = 0;
        }

        for (int j = 0; j <= i; j++)
        {
            cout<<start;
            start = 1 - start;
        }
        cout<<endl;
    }
    
    
}

void numberCrown (int n) {

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }

        for (int k = 0; k < 2*(n - i); k++)
        {
            cout<<"  ";
        }

        for (int j = i; j >= 1; j--)
        {
            cout<<j<<" ";
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
    cout<<"type 4 for number crown";
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

    case 4:
        numberCrown(n);

    default:
        break;
    }
    return 0;
}
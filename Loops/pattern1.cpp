#include <iostream>
using namespace std;

void square (int n) {

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout<<"*  ";
        }
        cout<<endl;
        
    }

}
void rightTriangle (int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
    }
    
}

void JnumTriangle (int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
    }
    
}

void InumTriangle (int n) {
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<i<<" ";
        }
        cout<<endl;
    }
    
}

int main(int argc, char const *argv[])
{
    int n;
    cout<<"enter no. of rows: ";
    cin>>n;

    cout<<"type 1 for square"<<endl;
    cout<<"type 2 for right triangle"<<endl;
    cout<<"type 3 for column number triangle"<<endl;
    cout<<"type 4 for  row number triangle"<<endl;
    int input;
    cin>>input;

    switch (input)
    {
    case 1:
        square(n);
        break;
    
    case 2:
        rightTriangle(n);
        break;

    case 3:
        JnumTriangle(n);
        break;
    
    case 4:
        InumTriangle(n);
        break;

    default:
        break;
    }
    
    return 0;
}

#include <iostream>
using namespace std;

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

void invertedTriangle (int n) {
    
    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            cout<<"* ";
        }
        cout<<endl;
        
    }
}
void invertedNumTriangle (int n) {
    
    for (int i = n; i >= 0; i--)
    {
        for (int j = 1; j <= i; j++)
        {
            cout<<j<<" ";
        }
        cout<<endl;
        
    }
    
}

void starpyramid(int n) {

    for (int i = 0; i <n ; i++)
    {
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout<<"  ";
        }
        for (int k = 0; k < 2*i+1; k++)
        {
            cout<<" *";
        }
        
        cout<<endl;
        
        
    }
}

void invertedstarpyramid (int n) {
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout<<"  ";
        }
        
        for (int k = 0; k < 2*n - (2*i + 1); k++)
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

    cout<<"type 1 for inverted triangle"<<endl;
    cout<<"type 2 for inverted number triangle"<<endl;
    cout<<"type 3 for star pyramid"<<endl;
    cout<<"type 4 for inversted star pyramid"<<endl;
    cout<<"type 5 for asymmetrical diamond"<<endl;
    int input;
    cin>>input;

    switch (input)
    {
    case 1:
        invertedTriangle(n);
        break;

    case 2:
        invertedNumTriangle(n);
        break;

    case 3: 
        starpyramid(n);
        break;

    case 4:
        invertedstarpyramid(n);
        break;
    
    case 5:
        starpyramid(n);
        invertedstarpyramid(n);

    default:
        break;
    }

    return 0;
}

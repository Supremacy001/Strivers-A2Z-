#include <iostream>
using namespace std;

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

int main(int argc, char const *argv[])
{
    int n;
    cout<<"enter no. of rows: ";
    cin>>n;

    cout<<"type 1 for inverted triangle"<<endl;
    cout<<"type 2 for inverted number triangle"<<endl;
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

    default:
        break;
    }

    return 0;
}

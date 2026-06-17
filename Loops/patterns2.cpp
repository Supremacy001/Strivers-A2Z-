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
int main(int argc, char const *argv[])
{
    int n;
    cout<<"enter no. of rows: ";
    cin>>n;

    cout<<"type 1 for right triangle"<<endl;
    int input;
    cin>>input;

    switch (input)
    {
    case 1:
        invertedTriangle(n);
        break;
    
    default:
        break;
    }

    return 0;
}

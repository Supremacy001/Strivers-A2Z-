#include <iostream>
using namespace std;

void letterTriangle (int n) {
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
        
    }
    
}

int main(int argc, char const *argv[])
{
    int n;
    cout<<"enter no. of rows: ";
    cin>>n;

    int input;
    cout<<"type 1 for letter triangle"<<endl;

    cin>>input;

    switch (input)
    {
    case 1:
        letterTriangle(n);
        break;
    
    default:
        break;
    }
    return 0;
}

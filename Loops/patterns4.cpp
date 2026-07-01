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

void invletterTriangle (int n) {
    
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A' + n; ch >= 'A' ; ch--)
        {
            cout<<ch<<" ";
        }
        cout<<endl;
    }
    
}

void alpharamp (int n) {

    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout<<ch;
        }
        cout<<endl;
        
    }
    
}

void alphahill (int n) {

    for (int i = 0; i < n; i++)
    {

        //space

        for (int space = n - 1; space > i ; space--)
        {
            cout<<"  ";
        }

        char ch = 'A';
    
        int breakpoint = (2*i+1) / 2;
        
        //characters

        for (int j = 0; j < 2*i+1; j++)
        {
            
            cout<<ch<<" ";

            if (j >= breakpoint)
            {
                ch--;
            }
            else {
                ch++;
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

    int input;
    cout<<"type 1 for letter triangle"<<endl; 
    cout<<"type 2 for inverse letter triangle"<<endl;
    cout<<"type 3 for alpha ramp"<<endl;
    cout<<"type 4 for alpha hill"<<endl;

    cin>>input;

    switch (input)
    {
    case 1:
        letterTriangle(n);
        break;
    
    case 2:
        invletterTriangle(n);
        break;

    case 3:
        alpharamp(n);
        break;

    case 4:
        alphahill (n);
        break;

    default:
        break;
    }
    return 0;
}

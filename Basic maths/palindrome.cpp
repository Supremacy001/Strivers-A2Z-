#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    cout << "enter a number: ";
    int x, last, rev = 0;
    cin>>x;
    int dup = x;

    while (x > rev)
    {
        last = x % 10;
        rev = rev * 10 + last;
        x = x / 10;
    }

    if (x == rev/10 || x == rev)
    {
        cout<<"palindrome";
        return 0;
    }
  
    cout<<"not palindrome";
    return 0;
}

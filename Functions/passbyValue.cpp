#include <iostream>
using namespace std;

void modify(int a) {
    a = a + 10;
    cout<<"copy of original value was modified : "<<a<<endl;
}

int main(int argc, char const *argv[])
{
    int x = 5;
    modify(x);
    cout<<"original value : "<<x;
    return 0;
}
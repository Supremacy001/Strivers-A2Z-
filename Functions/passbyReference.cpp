#include <iostream>
using namespace std;


void modify(int &a) {

    a = a + 10;
    cout<<"modified value = "<<a<<endl;

}
int main(int argc, char const *argv[])
{
    int n = 5;

    modify(n);

    cout<<"original value = "<<n<<endl;
    return 0;
}

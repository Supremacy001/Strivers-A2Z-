#include <iostream>
using namespace std;

int main(int argc, char const *argv[])
{
    int x, last;
    int rev = 0;

    cin>>x;

    while(x != 0) {

        last = x % 10;

        //positive overflow check
        if (rev > INT_MAX/10) {
            return 0;
        }
        if (rev == INT_MAX/10 && last > 7) {
            return 0;
        }
        //negative overflow check
        
        if (rev < INT_MIN/10) {
            return 0;
        }
        if (rev == INT_MIN/10 && last < -8) {
            return 0;
        }
        rev = rev*10 + last;
        x = x/10;
            
    } 

    return rev;
}

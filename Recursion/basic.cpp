#include <iostream>
using namespace std;

void walk(int n) {

    if (n > 10) {
        return;
    }

    cout<<"step "<<n<<endl;
    walk(n + 1);
}

int main () {
    walk(0);
}

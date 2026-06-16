#include <iostream>
using namespace std;

int main() {

    int n;

    cout<<"enter number of iterations: "<<endl;
    cin>>n;

    for (int i = 1; i <= n; i++) {
        cout << "This is the " << i << "'th iteration" << endl;
    }
    return 0;
}

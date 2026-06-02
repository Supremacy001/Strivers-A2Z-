#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    bool comparing(string s1, string s2) {
        return s1 == s2;
    }
};

int main(int argc, char const *argv[])
{
    Solution obj;

    string s1;
    cin>>s1;

    string s2;
    cin>>s2;

    if (obj.comparing(s1, s2)) {
        cout << "equal"<<endl;

    }
    else {
        cout << "not equal"<<endl;
    }
    return 0;
}

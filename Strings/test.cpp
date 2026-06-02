#include <bits/stdc++.h>
using namespace std;

class Solution {
    public:

    string modifyingstring(string str) {
        string newstr = str;
        newstr[0] = 'H';
        return newstr;
    }
};
int main(int argc, char const *argv[])
{
    string original = "hello";

    Solution sol;

    string modified = sol.modifyingstring(original);

    cout<<"Original = "<<original<<endl;
    cout<<"Modified = "<<modified<<endl;

    return 0;
}

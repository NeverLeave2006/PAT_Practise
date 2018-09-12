#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int a,b;
    cin>>a>>b;
    string s=to_string(a*b);
    reverse(s.begin(),s.end());
    while(s[0]=='0')s.erase(s.begin());
    cout<<s;
    return 0;
}
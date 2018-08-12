#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    string s;
    cin>>s;
    int k=1;
    while(k!=6174&&k!=0){
        while(s.length()<4)s+="0";
        sort(s.begin(),s.end());
        int b=stoi(s);
        reverse(s.begin(),s.end());
        int a=stoi(s);
        k=a-b;
        printf("%04d - %04d = %04d\n",a,b,k);
        s=to_string(k);
    }
    return 0;
}
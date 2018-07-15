#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string s,shu[]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
    cin>>s;
    int num=0;
    for(char c:s)num+=(c-'0');
    vector<string> vs;
    for(;num!=0;num/=10)vs.push_back(shu[num%10]);
    for(auto it=vs.rbegin();it!=vs.rend();it++){
        if(it!=vs.rbegin())printf(" ");
        cout<<*it;
    }
    return 0;
}
#include <iostream>
#include <set>
using namespace std;
int main()
{
    int n;
    cin>>n;
    set<int> si;
    for(int i=0;i<=n;i++){
        si.insert(i/2+i/3+i/5);
    }
    cout<<si.size();
    return 0;
}
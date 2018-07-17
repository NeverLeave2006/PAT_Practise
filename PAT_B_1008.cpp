#include <iostream>
#include <vector>
using namespace std;
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    vector<int> vi(a);
    for(int i=0;i<a;i++){
        scanf("%d",&vi[(i+b)%a]);
    }
    for(int i:vi)printf(--a?"%d ":"%d",i);
    return 0;
}
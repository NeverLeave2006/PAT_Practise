#include <iostream>
using namespace std;
int main()
{
    int N;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        long long a,b,c;
        scanf("%lld%lld%lld",&a,&b,&c);
        printf("Case #%d: %s\n",i+1,a+b>c?"true":"false");
    }
    return 0;
}
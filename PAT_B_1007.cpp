#include <iostream>
using namespace std;
int a[100010];//数字筛
int main()
{
    a[1]=1;
    int N,cnt=0;
    scanf("%d",&N);
    for(int i=2;i<=N;i++){//数字筛
        if(!a[i]){
            for(int j=2;j*i<=N;j++){
                a[j*i]=1;
            }
        }
    }
    for(int i=1;i<=N-2;i++){
        if(a[i]==0&&a[i+2]==0)cnt++;
    }
    printf("%d",cnt);
    return 0;
}
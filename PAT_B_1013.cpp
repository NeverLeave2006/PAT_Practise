#include <iostream>
using namespace std;
int arr[10010000],p[1010],cnt=0;//这里用素数筛好像不如直接判断素数！！！
int main()
{
    int a,b;
    scanf("%d%d",&a,&b);
    for(int i=2;cnt<=b;i++){
        if(arr[i]==0){
            for(int j=2;j*i<=1000000;j++){
                arr[i*j]=1;
            }
            p[cnt++]=i;
        }
    }
    for(int i=0;i<b-a+1;i++){
        printf("%s%d",i%10!=0?" ":"",p[i+a-1]);
        if(i%10==9)printf("\n");
    }
    return 0;
}
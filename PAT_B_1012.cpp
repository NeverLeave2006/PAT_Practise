#include <iostream>
using namespace std;
int main()
{
    double a[5]={0,0,0,0,0};
    int N,tmp,sgn=-1,f1=0,f2=0,f3=0,f4=0,f5=0,cnt3=0;
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        scanf("%d",&tmp);
        if(tmp%10==0){
            a[0]+=tmp;
            f1=1;
        };
        if(tmp%5==1){
            f2=1;
            sgn*=-1;
            a[1]+=sgn*tmp;
        }
        if(tmp%5==2){
            f3=1;
            a[2]++;
        };
        if(tmp%5==3){
            f4=1;
            a[3]+=tmp;
            cnt3++;
        };
        if(tmp%5==4){
            f5=1;
            if(tmp>a[4])a[4]=tmp;
        }
    }
    f1?cout<<a[0]<<" ":cout<<"N"<<" ";
    f2?cout<<a[1]<<" ":cout<<"N"<<" ";
    f3?cout<<a[2]<<" ":cout<<"N"<<" ";
    f4?printf("%.1f ",a[3]/cnt3):printf("N ");
    f5?cout<<a[4]:cout<<"N";
    return 0;
}
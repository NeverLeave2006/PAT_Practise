#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int m,x,y,flag=0;
    double A[3];
    scanf("%d%d%d",&m,&x,&y);
    for(int i=9;i>0;i--){
        for(int j=9;j>=0;j--){
            int a=i*10+j,b=j*10+i;
            double c=abs(a-b)*1.0/x;
            if(b==c*y){
                A[0]=a,A[1]=b,A[2]=c;
                flag=1;
                break;
            }
        }
        if(flag)break;
    }
    if(flag){
        cout<<A[0];
        for(int i=0;i<3;i++){
            printf(" ");
            if(m<A[i])printf("Cong");
            else if(m==A[i])printf("Ping");
            else if(m>A[i])printf("Gai");
        }
    }else{
        printf("No Solution\n");
    }
    return 0;
}
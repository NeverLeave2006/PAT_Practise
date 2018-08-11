#include <iostream>
using namespace std;
int main()
{
    int n,a[3]={0},b[3]={0},A[3]={0},B[3]={0},ai=0,bi=0;//BCJ
    char s[]={'B','C','J'};
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        char ca,cb;
        cin>>ca>>cb;
        if(ca==cb){//平局
            a[1]++;
            b[1]++;
        }else{
            if(ca=='B'){
                if(cb=='C'){
                    a[0]++;
                    b[2]++;
                    A[0]++;
                }else if(cb=='J'){
                    a[2]++;
                    b[0]++;
                    B[2]++;
                }
            }
            if(ca=='C'){
                if(cb=='B'){
                    a[2]++;
                    b[0]++;
                    B[0]++;
                }else if(cb=='J'){
                    a[0]++;
                    b[2]++;
                    A[1]++;
                }
            }
            if(ca=='J'){
                if(cb=='C'){
                    a[2]++;
                    b[0]++;
                    B[1]++;
                }else if(cb=='B'){
                    a[0]++;
                    b[2]++;
                    A[2]++;
                }
            }
        }
    }
    for(int i=0;i<3;i++)printf(i==0?"%d":" %d",a[i]);
    printf("\n");
    for(int i=0;i<3;i++)printf(i==0?"%d":" %d",b[i]);
    for(int i=0;i<3;i++){
        if(A[ai]<A[i])ai=i;
        if(B[bi]<B[i])bi=i;
    }
    printf("\n%c %c",s[ai],s[bi]);
    return 0;
}
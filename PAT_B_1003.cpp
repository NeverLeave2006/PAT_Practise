#include <iostream>
using namespace std;
int main()
{
    string s;//临时字符串
    int N;//要处理的字符串个数
    scanf("%d",&N);
    for(int i=0;i<N;i++){
        cin>>s;
        int a[3]={0,0,0},k=0,flag=0,p=0,t=0;
        for(char c:s){
            if(c=='A'){
                a[k]++;
                flag=1;
            }
            else if(c=='P'){
                if(!p&&k==0){//防止PAT顺序颠倒
                    k=1;
                    p=1;
                }else{
                    flag=0;
                    break;
                }
            }
            else if(c=='T'){
                if(!t&&k==1){//防止PAT顺序颠倒
                    k=2;
                    t=1;
                }else{
                    flag=0;
                    break;
                }
            }
            else{
                flag=0;
                break;
            }
        }
        if(a[0]*a[1]!=a[2]||a[1]==0||p==0||t==0)flag=0;//PAT三个字母都有
        printf(flag?"YES\n":"NO\n");
    }
    return 0;
}

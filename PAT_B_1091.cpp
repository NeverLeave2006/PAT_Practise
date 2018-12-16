#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++){
        int tmp,squ,flag=1;
        scanf("%d",&tmp);
        squ=tmp*tmp;
        int t=pow(10,(to_string(tmp)).length());
        for(int j=1;j<10;j++){
            if((j*squ)%t==tmp){
                printf("%d %d\n",j,j*squ);
                flag=0;
                break;
            }
        }
        if(flag)printf("No\n");
    }
    return 0;
}
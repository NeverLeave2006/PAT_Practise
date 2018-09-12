#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
using namespace std;
int n,v[110],d[110];
int main()
{
    scanf("%d",&n);
    
    for(int i=1;i<=n;i++){
        scanf("%d",&v[i]);
    }
    for(int i=1;i<n;i++){
        for(int j=i+1;j<=n;j++){
            vector<int> vi;
            fill(d,d+n+1,1);
            d[i]=d[j]=-1;
            for(int k=1;k<=n;k++){
                if(v[k]*d[abs(v[k])]<0)
                    vi.push_back(k);
            }
            if(vi.size()==2&&d[vi[0]]+d[vi[1]]==0){
                printf("%d %d\n",i,j);
                return 0;
            }
        }
    }
    printf("No Solution\n");
    return 0;
}
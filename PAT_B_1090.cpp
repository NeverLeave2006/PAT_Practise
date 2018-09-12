#include <iostream>
#include <set>
#include <vector>
using namespace std;
int m,n;
vector<int> vi[100010];
int main()
{
    scanf("%d%d",&m,&n);
    for(int i=0;i<m;i++){
        int a,b;
        scanf("%d%d",&a,&b);
        vi[a].push_back(b);
        vi[b].push_back(a);
    }
    for(int i=0;i<n;i++){
        int nn,flag=1;
        scanf("%d",&nn);
        set<int> list;
        for(int j=0;j<nn;j++){
            int tmp;
            scanf("%d",&tmp);
            list.insert(tmp);
            for(int x:vi[tmp]){
                if(list.count(x)){
                    flag=0;
                }
            }
        }
        printf(flag?"Yes\n":"No\n");
    }
    return 0;
}
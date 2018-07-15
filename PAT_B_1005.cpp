#include <iostream>
#include <set>
#include <vector>
using namespace std;
int main()
{
    set<int> res,coverElements;//集合，收集被覆盖的元素
    int N;
    scanf("%d",&N);
    vector<int> array;
    for(int i=0;i<N;i++){
        int tmp;
        scanf("%d",&tmp);
        array.push_back(tmp);
        while(tmp!=1){
            if(tmp%2==1){
                tmp=(3*tmp+1)/2;
                coverElements.insert(tmp);
            }
            if(tmp%2==0){//偶数在后，这样tmp为1时可以跳过
                tmp/=2;
                coverElements.insert(tmp);
            }
        }
    }
    for(int i:array){
        if(!coverElements.count(i))res.insert(i);
    }
    for(auto it=res.rbegin();it!=res.rend();it++){
        if(it!=res.rbegin())printf(" ");
        printf("%d",*it);
    }
    return 0;
}
#include <iostream>
using namespace std;
int idx[510],mont[510];
vector<double> vd;
bool cmp(int a,int b){
    return vd[a]/mount[a]<vd[b]/mount[b];
}
int main()
{
    for(int i=0;i<500;i++){
        idc[i]=i;
    }
    int n,d
    scanf("%d%d",&n,&d);
    vd.resize(n);
    for(int i=0;i<N;i++){
        cin>>mount[i];
    }
    for(int i=0;i<N;i+){
        cin>>vd[i];
        vd[i]/=mount[i];
    }
    sort(idx,idx+n,cmp);
    double sum=0;
    for(int i=0;i<N;i++){
        if(d>mount[idx[i]]){
            sum+=mount[idx[i]]*vd[idx[i]];
            d-=mount[idx[i]];
        }else{
            sum+=d*vd[idx[i]];
            d=0;
            break;
        }
    }
    printf("%.2lf",sum);
    return 0;
}
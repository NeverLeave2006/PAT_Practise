#include <iostream>
#include <queue>
using namespace std;
int main()
{
    string s;
    int t;
    cin>>s>>t;
    queue<int> qi;
    queue<int> res;
    for(char c:s){
        qi.push(c-'0');
    }
    int tmp=0;
    while(!qi.empty()){
        tmp*=10;
        tmp+=qi.front();
        res.push(tmp/t);
        tmp=tmp%t;
        qi.pop();        
    }
    while(res.front()==0&&res.size()!=1)res.pop();
    while(!res.empty()){
        printf("%d",res.front());
        res.pop();
    }
    printf(" %d",tmp);
    return 0;
}
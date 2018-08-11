#include <iostream>
using namespace std;
int main()
{
    string s[2];
    char c[2];
    int d[2]={0,0};
    cin>>s[0]>>c[0]>>s[1]>>c[1];
    for(int i=0;i<2;i++){
        for(char cc:s[i]){
            if(cc==c[i]){
                d[i]*=10;
                d[i]+=(c[i]-'0');
            }
        }
    }
    printf("%d",d[0]+d[1]);
    return 0;
}
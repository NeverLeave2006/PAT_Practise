#include <iostream>
using namespace std;
int main(){
    int n,cnt=0;
    scanf("%d",&n);
    for(;n!=1;cnt++){
        n%2?n=(3*n+1)/2:n/=2;
    }
    printf("%d",cnt);
    return 0;
}
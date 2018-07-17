#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string s,tmp;
    vector<string> vs;
    getline(cin,s);
    int cnt=1;
    for(char c:s){
        if(c!=' '){
            tmp+=c;
        }else{
            vs.push_back(tmp);
            tmp.clear();
            cnt++;
        }
    }
    vs.push_back(tmp);
    for(auto it=vs.rbegin();it!=vs.rend();it++){
        cout<<*it;
        printf(--cnt?" ":"");
    }
    return 0;
}
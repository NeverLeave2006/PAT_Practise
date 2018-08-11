#include <iostream>
#include <vector>
using namespace std;
int main()
{
    string s,tmp;
    vector<string> vs;
    getline(cin,s);
    for(char c:s){
        if(c!=' '){
            tmp+=c;
        }else{
            vs.push_back(tmp);
            tmp.clear();
        }
    }
    vs.push_back(tmp);
    for(auto it=vs.rbegin();it!=vs.rend();it++){
        printf(it==vs.rbegin()?"":" ");
        cout<<*it;
    }
    return 0;
}
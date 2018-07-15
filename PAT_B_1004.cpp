#include <iostream>
using namespace std;
struct list{
    string name,id;
    int score;
};
int main()
{
    int N;
    scanf("%d",&N);//个数
    string s1,s2;
    int score;
    cin>>s1>>s2>>score;
    list max={s1,s2,score};
    list min=max;
    for(int i=1;i<N;i++){
        cin>>s1>>s2>>score;
        list tmp={s1,s2,score};
        if(tmp.score>max.score)max=tmp;
        if(tmp.score<min.score)min=tmp;
    }
    cout<<max.name<<" "<<max.id<<endl;
    cout<<min.name<<" "<<min.id<<endl;
    return 0;
}
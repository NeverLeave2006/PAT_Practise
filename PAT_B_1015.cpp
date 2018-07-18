#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;
struct stu
{
    int id,m, t;
};
vector<stu> v[4];
int cnt = 0, N, L, H; //合格学生数,学生数，
bool cmp(stu s1, stu s2)
{
    if (s1.m + s1.t != s2.m + s2.t)
    {
        return (s1.m + s1.t) > (s2.m + s2.t);
    }
    else
    {
        if (s1.m != s2.m)
        {
            return s1.m > s2.m;
        }
        else
            return s1.id < s2.id;
    }
}
int main()
{
    scanf("%d%d%d", &N, &L, &H);
    for (int i = 0; i < N; i++)
    {
        stu tmp;
        scanf("%d%d%d",&tmp.id,&tmp.m,&tmp.t);
        if (tmp.t >= L && tmp.m >= L)
        {
            cnt++;
            if (tmp.t >= H && tmp.m >= H)
                v[0].push_back(tmp);
            else if (tmp.t < H && tmp.m >= H)
                v[1].push_back(tmp);
            else if(tmp.t < H && tmp.m < H && tmp.m >= tmp.t)
                v[2].push_back(tmp);
            else
                v[3].push_back(tmp);
        }
    }
    printf("%d\n", cnt);
    for (auto vec : v)
    {
        sort(vec.begin(), vec.end(), cmp);
        for (auto it=vec.begin();it!=vec.end();it++)
        {
            printf("%d %d %d\n",it->id, it->m, it->t);
        }
    }
    return 0;
}
#include <iostream>
#include <cstdio>
#include <algorithm>
#include <cmath>
using namespace std;
int n,fsxmc,m,tgrs,fsx;

struct cj
{
    int xh;
    int fs;
}x,f;

cj s[10001];

bool cmp(cj a,cj b)
{
    if(a.fs>b.fs)
        return true;
    return false;
}

int main ()
{
    //输入+通过名次计算 
    scanf("%d%d",&n,&m);
    fsxmc=floor(m*1.5);//通过名次计算 
    //cout<<fsxmc<<"\n";
    //cout<<fsx;
    for(int i=0;i<n;++i)
    {
        scanf("%d%d",&s[i].xh,&s[i].fs); 
    }
    //排序 
    sort(s,s+n,cmp);
    

    //cout<<s[4].xh<<" "<<s[4].fs<<"\n";
    
    //二次排序 将编号小的放在前面 
    for(int k=0;k<n;k++)
        for(int l=0;l<n;l++)
        {
            if(s[l].xh>s[l+1].xh&&s[l].fs<=s[l+1].fs)
            swap(s[l],s[l+1]);
        }
    //计算分数线以及通过的人数 
    fsx=s[fsxmc-1].fs;//分数线
    /*for(int p=0;p<n;p++)
    {
        cout<<s[p].xh<<" "<<s[p].fs<<"\n";//排序测试 
    }
    cout<<fsx<<endl; */
    for(int o=0;o<n;o++)
    {
        if(s[o].fs>=fsx)
        tgrs++;//通过人数 
    }
        
    //输出 
    cout<<fsx<<" "<<tgrs<<"\n"; //输出分数线与通过的人数 
    for(int p=0;p<tgrs;p++)
    {
        cout<<s[p].xh<<" "<<s[p].fs<<"\n";//输出通过的人的编号及分数 
    } 
    return 0;
}
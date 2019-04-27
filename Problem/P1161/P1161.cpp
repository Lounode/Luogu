#include <iostream>
#include <cstdio>
using namespace std;
int n;
bool s[2000010];
int main ()
{
    scanf("%d",&n);
    for(int i=1;i<=n;i++)
    {
        double a;
        int t;
        cin>>a>>t;
        for(int o=1;o<=t;o++)
        {
            int num=a*o;
            if(s[num]==true)
                s[num]=false;
            else
            {
                s[num]=true;
            }
            //cout<<num<<"\n";
        }
    }
    for(int i=1;i<=3000001;i++)
    {
        if(s[i]==true)
        {
            cout<<i;
            return 0;
        }
            
    }
    return 0;
}
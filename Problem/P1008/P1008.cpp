#include<cstdio>
using namespace std;
int main()
{
    bool a[10];
    a[0]=false;
    for(int u=1;u<10;u++)a[u]=true;
    for(int u=1;u<=9;u++)
      for(int m=1;m<=9;m++)
        for(int n=1;n<=9;n++)
        {
            int x=u*100+m*10+n,y=x*2,z=x*3;
            if(y>1000||z>1000)continue;
            a[u]=false;
            a[m]=false;
            a[n]=false;
            int y2=y,z2=z;
            if(u==m||m==n||u==n)goto con;
            for(int l=1;l<=3;l++)
            {
                if(!a[y2%10])
                {
                    for(int u=1;u<10;u++)a[u]=true;
                     goto con;
                }
                a[y2%10]=false;
                y2/=10;
            }
            for(int l=1;l<=3;l++)
            {
                if(!a[z2%10])
                {
                    for(int u=1;u<10;u++)a[u]=true;
                     goto con;
                }
                a[z2%10]=false;
                z2/=10;
            }
            printf("%d %d %d\n",x,y,z);
            for(int u=1;u<10;u++)a[u]=true;
            con:continue;
        }
    return 0;
}
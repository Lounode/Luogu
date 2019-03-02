#include <iostream>
#include <cstdio>
using namespace std;
int x,y,n;
int s[10010][10010];
int sx,sy,ex,ey;
int ans;
int main ()
{
	scanf("%d%d%d",&x,&y,&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d%d%d",&sx,&sy,&ex,&ey);
		for(int o=sx;o<=ex;o++)
			for(int p=sy;p<=ey;p++)
			{
				s[o][p]=1;
			}
	}
	for(int i=1;i<=x;i++)
		for(int o=1;o<=y;o++)
		{
			if(s[i][o])
				ans++;
		}
	cout<<ans;
}
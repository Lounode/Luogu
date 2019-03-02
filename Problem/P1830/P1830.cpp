#include <iostream>
#include <cstdio>
using namespace std;
int n,m,x,y;
int x1,y1,x2,y2;
int cx,cy;
int s[110][110];
int a[110][110];
int main ()
{
	scanf("%d%d%d%d",&n,&m,&x,&y);
	for(int i=1;i<=x;i++)
	{
		scanf("%d%d%d%d",&x1,&y1,&x2,&y2);
		for(int o=x1;o<=x2;o++)
			for(int p=y1;p<=y2;p++)
			{
				a[o][p]+=1;
				s[o][p]=i;
			}
				
	}
	for(int i=1;i<=y;i++)
	{
		scanf("%d%d",&cx,&cy);
		if(!s[cx][cy]) cout<<"N\n";
		else
		{
			cout<<"Y ";
			cout<<a[cx][cy]<<" "<<s[cx][cy]<<"\n";
		}
	}
	return 0;
}
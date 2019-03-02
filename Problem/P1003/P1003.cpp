#include <iostream>
#include <cstdio>
using namespace std;
int n;
int inx,iny;
int xl,yl;
int x,y;
int s[10001][4];
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d %d %d %d",&s[i][1],&s[i][2],&s [i][3],&s[i][4]);
		s[i][3]+=s[i][1];
		s[i][4]+=s[i][2];
	}
	scanf("%d %d",&x,&y);
	for(int i=n;i>=1;i--)
	{
		if(s[i][1]<=x&&s[i][2]<=y&&s[i][3]>=x&&s[i][4]>=y) {cout<<i; return 0;}
	}
	cout<<"-1";
	return 0;
}
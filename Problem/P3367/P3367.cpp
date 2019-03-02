#include <iostream>
#include <cstdio>
using namespace std;
int s[10010];
int n,m;
int zi,xi,yi;
void sz ()//数组赋值 
{
	for(int i=1;i<=n;i++)
		s[i]=i;
	return;
}
int gf (int x)
{
	if(s[x]==x)
		return x;
	else
	{
		s[x]=gf(s[x]);
		return s[x];
	}
}
int main ()
{
	scanf("%d%d",&n,&m);
	sz();
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d%d",&zi,&xi,&yi);
		if(zi==1)
		s[gf(xi)]=gf(yi);
		if(zi==2)
		{
			if(gf(xi)==gf(yi))
				cout<<"Y"<<"\n";
			else
				cout<<"N"<<"\n";
		}
	}
	return 0;
}
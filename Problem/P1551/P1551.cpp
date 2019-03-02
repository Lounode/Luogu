#include <iostream>
#include <cstdio>
using namespace std;
int s[10010];
int n,m,p;
int xi,yi;
int cx,cy;
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
	scanf("%d%d%d",&n,&m,&p);
//	cout<<n<<" "<<m<<" "<<p<<"\n";
	sz();
	for(int i=1;i<=m;i++)
	{
		scanf("%d%d",&xi,&yi);
		s[gf(xi)]=gf(yi);//合并的操作 xi yi 
	}
	for(int o=1;o<=p;o++)
	{
		scanf("%d%d",&cx,&cy);
		if(gf(cx)==gf(cy))
			cout<<"Yes"<<"\n";
		else
			cout<<"No"<<"\n";
	}
	return 0;
}
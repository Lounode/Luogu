#include <iostream>
#include <cstdio>
using namespace std;
int n,m;
int w[1000],v[1000],f[100000];
int main ()
{
	scanf("%d%d",&m,&n);
	for(int i=1;i<=n;i++)
	{
		scanf("%d%d",&v[i],&w[i]);
	}
	for(int i=1;i<=n;i++)
		for(int c=m;c>=v[i];c--)
		{
			if(c>=v[i])
			f[c]=max(f[c],f[c-v[i]]+w[i]);
		}
	cout<<f[m];
}
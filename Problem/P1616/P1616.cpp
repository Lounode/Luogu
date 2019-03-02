#include <iostream>
#include <cstdio>
using namespace std;
int n,m;
int v[10100],w[10100],f[100000010];
int main ()
{
	scanf("%d%d",&m,&n);
	for(int i=1;i<=n;i++)
		scanf("%d%d",&v[i],&w[i]);
	for(int i=1;i<=n;i++)
		for(int c=0;c<=m;c++)
		{
			if(c>=v[i])
			f[c]=max(f[c],f[c-v[i]]+w[i]);
		}
	cout<<f[m];
}
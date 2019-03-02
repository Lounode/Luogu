#include <iostream>
#include <cstdio>
using namespace std;
int n,m;
int w[10000];
int f[100000];
int main ()
{
	scanf("%d%d",&m,&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&w[i]);
	for(int i=1;i<=n;i++)
		for(int c=m;c>=w[i];c--)
		{
			if(f[c]<f[c-w[i]]+w[i])
			f[c]=max(f[c],f[c-w[i]]+w[i]);
		}
	cout<<m-f[m];
}
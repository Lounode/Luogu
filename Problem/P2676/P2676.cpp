#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int n,b;
int nn[20010];
int sl=0;
int gd=0;
int main ()
{
	scanf("%d%d",&n,&b);
	for(int i=1;i<=n;i++)
		scanf("%d",&nn[i]);
	sort(nn+1,nn+n+1,greater<int>());
	for(int i=1;i<=n;i++)
	{
		if(gd>b) break;
		gd+=nn[i];
		sl++;
	}
	cout<<sl;
	return 0;
}
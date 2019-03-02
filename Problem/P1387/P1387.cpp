#include <iostream>
#include <cstdio>
using namespace std;
int n,m;
int s[110][110];
int f[110][110];
int sum=1;
int main ()
{
	//freopen("zfx.in","r",stdin);
	//freopen("zfx.out","w",stdout);
	scanf("%d%d",&n,&m);
	for(int i=1;i<=n;i++)
		for(int o=1;o<=m;o++)
			scanf("%d",&s[i][o]);
	
	if(n==1&&m==1&&s[1][1]==0){cout<<"0";return 0;}
	
	for(int i=1;i<=n;i++)
	{
		for(int o=1;o<=m;o++)
		{
			if(s[i][o]==0) continue;
			f[i][o]=min(min(f[i-1][o],f[i][o-1]),f[i-1][o-1])+1;
			sum=max(sum,f[i][o]);
		}
	}
	cout<<sum;
	return 0;
}
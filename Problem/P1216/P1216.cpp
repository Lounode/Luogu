// luogu-judger-enable-o2
#include <iostream>
#include <cstdio>
using namespace std;
int a[10000][10000];
int f[10000][10000];
int n;
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		for(int j=1;j<=i;j++)
			cin>>a[i][j];

	for(int i=1;i<=n;i++)
	f[n][i]=a[n][i];
	for(int i=n-1;i>=1;i--)	
		for(int j=1;j<=i;j++)
		{
			int tmp=max(f[i+1][j],f[i+1][j+1]);
			f[i][j]=tmp+a[i][j];
		}
	cout<<f[1][1]<<"\n";
	return 0;
}
//我不过点我女装 我过了点DSZ就女
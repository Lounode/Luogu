#include <iostream>
#include <cstdio>
using namespace std;
int n;
int a[10],b[10];
void dfs (int x)
{
	if(x==n+1)
	{
		cout<<"    ";
		for(int i=1;i<=n;i++)
		{
			cout<<b[i]<<"    ";
		}
		cout<<"\n";
		return;
	}
	
	for(int i=1;i<=n;i++)
	{
			if(a[i]==0)
			{
				b[x]=i;
				a[i]=1;
				dfs(x+1);
				a[i]=0;
			}
	}
	return;
}
int main ()
{
	scanf("%d",&n);
	dfs(1);
}
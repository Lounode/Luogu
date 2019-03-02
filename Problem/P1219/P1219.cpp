#include <iostream>
#include <cstdio>
using namespace std;
int n,sum=0;
int a[13],jg[13];
bool lie[10], xie1[20], xie2[20];
void dfs (int x)
{
	if(x>n)
	{
		sum++;
		if(sum<=3)
		{
			for(int i=1;i<=n;i++)
				cout<<jg[i]<<" ";
			cout<<"\n";
		}
		
		return;
		
	}
	for(int i=1;i<=n;i++)
	{
		if(!lie[i] && !xie1[x+i] && !xie2[x-i+n])
		{
			jg[x]=i;
			lie[i]=xie1[x+i]=xie2[x-i+n]=true;
			dfs(x+1);
			lie[i]=xie1[x+i]=xie2[x-i+n]=false; 
		}
	}
}
int main ()
{
	scanf("%d",&n);
	dfs(1);
	cout<<sum<<"\n";
	return 0;
}
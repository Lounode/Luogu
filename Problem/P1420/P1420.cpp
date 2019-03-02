#include <iostream>
#include <cstdio>
using namespace std;
int n;
int s[100001];
int ans=0;
int sum=1;
int main ()
{
	scanf("%d",&n);
	for(int i=1;i<=n;i++)
		scanf("%d",&s[i]);
	for(int i=2;i<=n;i++)
	{
		if(s[i]-1==s[i-1])
			sum++;
		else
		{
			ans=max(ans,sum);
			sum=1;
		}
	}
	cout<<ans;
}
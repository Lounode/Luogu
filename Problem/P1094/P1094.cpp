#include <iostream>
#include <cstdio>
#include <algorithm>
using namespace std;
int s[30010];
int w,n;
int a,b;
int sum=0;
int main ()
{
	scanf("%d%d",&w,&n);
	a=1;
	b=n;
	for(int i=1;i<=n;i++)
	{
		scanf("%d",&s[i]);
	}
	sort(s+1,s+n+1);
	while(a<=b)
	{
		if(s[a]+s[b]<=w)
		{
			a++;
			b--;
			sum++;
		}
		else
		{
			b--;
			sum++;
		}
	}
	cout<<sum;
	return 0;
}
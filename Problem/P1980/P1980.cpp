#include <iostream>
#include <cstdio>
using namespace std;
int n,x,ans=0;
int a,b;
int main ()
{
	scanf("%d%d",&n,&x);
	
	for(int i=1;i<=n;i++)
	{
		a=i;
		while (a)
		{
			b=a%10;
			a=a/10;
			if(b==x)
			ans++;
		}
		
	}
	cout<<ans;
	return 0;
}
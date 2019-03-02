#include <iostream>
#include <cstdio>
using namespace std;
int l,r;
int ans=0;
int main ()
{
	scanf("%d%d",&l,&r);
	for(int i=l;i<=r;i++)
	{
		int sum=i;
		while (sum)
		{
			if(sum%10==2)
				ans++;
			sum/=10;
		}
	}
	cout<<ans;
}
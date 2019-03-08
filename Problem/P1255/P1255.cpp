#include <cstdio>
#include <cstdlib>
#include <string.h>
#include <string>
#include <math.h>
#include <algorithm>
#include <iostream>
#include <queue>
#include <stack>
#include <map>
#include <set>
typedef long long ll;
using namespace std;
ll len=1;
int n;
ll a[20010],b[20010],c[20010];
void fb()
{

	for(int i=3;i<=n;i++)
	{
		for(int o=1;o<=len;o++)
			c[o]=a[o]+b[o];
		for(int p=1;p<=len;p++)
		{
			if(c[p]>=10)
			{
				c[p+1]+=c[p]/10;
				c[p]%=10;
				if(p+1>len)
					len++;
			}
		}
		for(int k=1;k<=len;k++)
			a[k]=b[k];
		for(int l=1;l<=len;l++)
			b[l]=c[l];
	}
}
int main()
{
	scanf("%d",&n);
	if(n==0) {cout<<"0"<<"\n";return 0;}
	if(n==1) {cout<<"1"<<"\n";return 0;}
	if(n==2) {cout<<"2"<<"\n";return 0;}
	a[1]=1,b[1]=2;
	fb();
	for(int i=len;i>0;i--)
		cout<<b[i];
	return 0;	
}